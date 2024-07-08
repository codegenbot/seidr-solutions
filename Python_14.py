from typing import List


def all_prefixes_and_suffixes(string: str) -> List[str]:
    result = []
    for i in range(len(string) + 1):
        if i == 0:
            prefix = ""
        else:
            prefix = string[:i]
        suffix = string[i:] if i < len(string) else ""
        result.append(prefix + suffix)
    return result