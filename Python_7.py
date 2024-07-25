```
from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


if __name__ == "__main__":
    try:
        input_strings = [line.strip() for line in input().splitlines()]
        substring = input()
        print(filter_by_substring(input_strings, substring))
    except EOFError:
        print("No input provided. Please enter the required inputs.")