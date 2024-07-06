from typing import list

def filter_by_substring(strings: list, substring: str) -> list:
    return [s for s in strings if substring in s]

strings = input("Enter a list of strings (space separated): ").split()
substring = input("Enter a substring to filter by: ")

filtered_strings = filter_by_substring(strings, substring)

print("Filtered Strings:", filtered_strings)