from typing import List


def filter_by_prefix() -> None:
    strings = input("Enter a list of strings (comma separated): ")
    prefix = input("Enter the prefix: ")

    try:
        strings_list = [s.strip() for s in strings.split(",")]
        filtered_strings = [s for s in strings_list if s.startswith(prefix)]

        print(f"The strings that start with '{prefix}' are: {filtered_strings}")
    except ValueError:
        print("Invalid input. Please enter a list of strings and a prefix.")