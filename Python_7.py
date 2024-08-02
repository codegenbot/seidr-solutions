```Python
from typing import List


def filter_by_substring():
    user_strings = input("Enter a list of strings (separated by spaces): ")
    user_substring = input("Enter the substring: ")

    user_strings_list = [s.strip() for s in user_strings.split()]

    filtered_strings = [s for s in user_strings_list if user_substring in s]

    return filtered_strings

print(filter_by_substring())