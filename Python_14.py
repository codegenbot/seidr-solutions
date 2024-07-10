```
from typing import List


def all_prefixes(string: str) -> List[str]:
    return [string[:i] for i in range(1, len(string) + 1)] + [string]


string = input("Please enter a string: ")
print(all_prefixes(string))