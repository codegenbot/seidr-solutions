from typing import List


def filter_by_prefix() -> List[str]:
    strings = input("Enter a list of strings (comma separated): ").split(",")
    prefix = input("Enter a prefix: ")
    filtered_list = [s for s in strings if s.startswith(prefix)]
    return filtered_list


print(len(filter_by_prefix()))