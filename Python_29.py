```
from typing import List


def filter_by_prefix():
    try:
        strings = [s.strip() for s in input("Enter strings (comma-separated): ").split(",")]
        prefix = input("Enter prefix: ")

        filtered_strings = [s for s in strings if s.startswith(prefix)]

        print(filtered_strings)
    except ValueError as e:
        print(f"Error occurred: {e}")


filter_by_prefix()