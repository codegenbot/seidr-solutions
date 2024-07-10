```Python
from typing import List


def all_prefixes(s: str) -> List[str]:
    return [s[:i] for i in range(0, len(s) + 1)]


string = input("Please enter a string: ")
print(all_prefixes(string))