from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> None:
    for s in strings:
        if s.startswith(prefix):
            print(s)


num_strings = int(input("Enter number of strings: "))
strings = [input() for _ in range(num_strings)]
prefix = input("Enter prefix: ")
filter_by_prefix(strings, prefix)