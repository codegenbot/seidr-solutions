```
from typing import List


def all_prefixes_and_suffixes(string: str) -> List[str]:
    prefixes = []
    for i in range(len(string)):
        prefixes.append(string[:i + 1])
    suffixes = []
    for i in range(len(string) - 1, -1, -1):
        suffixes.append(string[i:])
    result = prefixes + suffixes
    return result