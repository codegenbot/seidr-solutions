```
from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]


if __name__ == "__main__":
    n = int(input("Enter number of strings: "))
    strings = [input(f"Enter string {i+1}: ") for i in range(n)]
    prefix = input("Enter the prefix: ")
    result = filter_by_prefix(strings, prefix)
    print("Strings that start with the given prefix:")
    for s in result:
        print(s)