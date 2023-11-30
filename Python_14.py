from typing import List


def all_prefixes() -> List[str]:
    string = input()
    prefixes = []
    for i in range(1, len(string) + 1):
        prefixes.append(string[:i])
    return prefixes