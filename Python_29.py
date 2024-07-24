from typing import List


def filter_by_prefix():
    strings = input("Enter a list of strings (comma-separated): ")
    strings = [s.strip() for s in strings.split(",")]
    prefix = input("Enter the prefix to search: ")
    result = [s for s in strings if s.startswith(prefix)]
    print(result)