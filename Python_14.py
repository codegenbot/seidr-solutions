from typing import List


def all_prefixes(string: str) -> List[str]:
    prefixes = [""]
    for i in range(len(string)):
        prefix = string[: i + 1]
        if i > 0:
            prefix += string[i]
        prefixes.append(prefix)
    return prefixes