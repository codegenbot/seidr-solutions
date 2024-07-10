from typing import List


def all_prefixes(s: str) -> List[str]:
    return [s[: i + 1] for i in range(len(s))]


string = input("Please enter a string: ")
print(all_prefixes(string))