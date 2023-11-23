import sys
from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


def main():
    substring = sys.stdin.readline().strip()
    strings = sys.stdin.readline().strip().split(', ')
    result = filter_by_substring(strings, substring)
    print(result)


if __name__ == "__main__":
    main()