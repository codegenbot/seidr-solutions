from typing import List


def filter_by_prefix() -> List[str]:
    n = int(input("Enter the number of strings: "))
    strings = [input(f"Enter string {i+1}: ") for i in range(n)]
    prefix = input("Enter the prefix: ")
    return [s for s in strings if s.startswith(prefix)]