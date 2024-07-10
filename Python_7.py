from typing import List


def filter_by_substring():
    strings = input("Enter a list of strings (separated by space): ").split()
    substring = input("Enter a substring: ")

    result = [s for s in strings if substring in s]

    return result