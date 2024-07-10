```
from typing import List
import re


def filter_by_substring():
    while True:
        try:
            expected_output = input("Is your expected output 'True values', 'False values', or 'all'? ")
            if expected_output.lower() not in ["true values", "false values", "all"]:
                print("Invalid input. Please try again.")
                continue
            break
        except ValueError:
            print("Invalid input. Please try again.")

    while True:
        try:
            input_str = input("Enter strings (comma-separated): ")
            substring = input("Enter a substring: ")

            if not input_str or not substring:
                print("Please provide both strings and a substring.")
                continue

            strings = [s.strip() for s in input_str.split(",")]
            while True:
                try:
                    num_to_display = int(input(f"Enter the number of results to display (1-{len(strings)}): "))
                    if 1 <= num_to_display <= len(strings):
                        break
                    else:
                        print("Please enter a number between 1 and {}".format(len(strings)))
                except ValueError:
                    print("Invalid input. Please try again.")

            break

        except ValueError:
            print("Invalid input. Please try again.")

    result = [s for s in strings if bool(re.compile(substring).search(s))]
    if expected_output.lower() == "true values":
        print(result[:num_to_display])
    elif expected_output.lower() == "false values":
        print([s for s in strings if not bool(re.compile(substring).search(s))][:num_to_display])
    else:
        print(result + [s for s in strings if not bool(re.compile(substring).search(s))][:num_to_display])