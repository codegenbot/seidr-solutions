from typing import List


def filter_by_prefix() -> int:
    strings = input("Enter a list of strings (comma separated): ").split(",")
    prefix = input("Enter a prefix: ")
    filtered_list = [s for s in strings if s.startswith(prefix)]
    return len(filtered_list)


print(filter_by_prefix())