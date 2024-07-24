````
from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


if __name__ == "__main__":
    strings = input("Enter a list of strings (comma-separated): ").split(",")
    substring = input("Enter a substring: ")
    print(filter_by_substring(strings, substring))
```