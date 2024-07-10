from typing import List
import re


def filter_by_substring():
    while True:
        try:
            input_str = input("Enter strings (comma-separated): ")
            substring = input("Enter a substring: ")

            if not input_str or not substring:
                print("Please provide both strings and a substring.")
                continue

            strings = [s.strip() for s in input_str.split(",")]
            break
        except ValueError:
            print("Invalid input. Please try again.")

    pattern = re.compile(substring)

    result = [s for s in strings if bool(pattern.search(s))]
    print(result)


filter_by_substring()