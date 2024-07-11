from typing import List


def filter_by_prefix():
    strings = input("Enter strings (comma-separated): ").split(",")
    prefix = input("Enter prefix: ")

    if strings and prefix:
        filtered_strings = [s.strip() for s in strings if s.strip().startswith(prefix)]
        print(filtered_strings)
    else:
        print("Invalid input. Please try again.")


filter_by_prefix()