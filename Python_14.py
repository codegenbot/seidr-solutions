from typing import List


def all_prefixes_and_suffixes(string: str) -> List[str]:
    result = []
    for i in range(len(string)):
        result.append(string[: i + 1])
    for i in range(len(string), -1, -1):
        result.append(string[i:])
    return result