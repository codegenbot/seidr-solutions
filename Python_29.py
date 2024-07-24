from typing import List


def filter_by_prefix() -> List[str]:
    strings = input("Enter space-separated string(s): ").split()
    prefix = input("Enter the prefix: ")
    return [s for s in strings if s.startswith(prefix)]