```
from typing import List


def filter_by_prefix():
    try:
        strings = input("Enter strings (comma-separated): ").split(",")
        prefix = input("Enter prefix: ")

        if len(strings) > 1:
            filtered_strings = [
                s.strip()
                for s in strings
                if s.strip().startswith(prefix)
            ]
            print(filtered_strings)
        else:
            print("Please enter more than one string.")
    except ValueError as e:
        print(f"Error occurred: {e}")


filter_by_prefix()