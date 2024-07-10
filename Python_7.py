from typing import List


def filter_by_substring():
    user_input = input("Enter a list of strings (comma-separated): ")
    strings = [s.strip() for s in user_input.split(",")]
    substring = input("Enter the substring to search: ")

    filtered_strings = [s for s in strings if substring in s]

    return filtered_strings