from typing import List


def filter_by_prefix() -> None:
    strings = input("Enter space-separated list of strings: ").split()
    prefix = input("Enter the prefix to filter by: ")
    result = [s for s in strings if s.startswith(prefix)]
    print(result)


filter_by_prefix()