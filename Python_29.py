from typing import List


def filter_by_prefix():
    strings = input("Enter strings (space-separated): ").split()
    prefix = input("Enter a prefix: ")
    return [s for s in strings if s.startswith(prefix)]


print(filter_by_prefix())