```
from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    if __name__ == "__main__":
        strings = input("Enter a list of strings (comma separated): ").split(',')
        strings = [s.strip() for s in strings]
        prefix = input("Enter the prefix: ")
        result = filter_by_prefix(strings, prefix)
        print(result)