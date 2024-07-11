```
from typing import List, Dict


def all_substrings(string: str) -> Dict[str, int]:
    result = {}
    for i in range(len(string)):
        for j in range(i + 1, len(string) + 1):
            substring = string[i:j]
            if substring in result:
                result[substring] += 1
            else:
                result[substring] = 1
    return result