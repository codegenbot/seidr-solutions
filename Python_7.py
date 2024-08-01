```
from typing import List


def filter_by_substring() -> None:
    strings = input("Enter a list of strings (comma separated): ")
    substring = input("Enter a substring: ")

    while not strings.strip():
        print("Invalid input! Please enter a valid list of strings.")
        strings = input("Enter a list of strings (comma separated): ")

    while not substring:
        print("Please enter a valid substring!")
        substring = input("Enter a substring: ")

    try:
        strings_list = [s.strip() for s in strings.split(',')]
        filtered_strings = [s for s in strings_list if substring.lower() in s.lower()]
        print(f"Strings containing '{substring}' are: {filtered_strings}")
    except Exception as e:
        print(f"An error occurred: {str(e)}")