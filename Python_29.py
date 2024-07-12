from typing import List


def filter_by_prefix() -> None:
    strings = input("Enter a list of strings (space-separated): ")
    prefix = input("Enter the prefix to filter by: ")

    try:
        strings_list = [s.strip() for s in strings.split()]
        filtered_strings = [s for s in strings_list if s.startswith(prefix)]

        print(f"Strings with '{prefix}' as a prefix: {filtered_strings}")
    except ValueError:
        print("Invalid input. Please enter strings and a prefix.")