from typing import List


def all_prefixes(string: str) -> List[str]:
    result = ['']  # Add an empty string
    for i in range(len(string) + 1):
        result.append(string[:i])
    return result