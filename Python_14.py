from typing import List

def all_prefixes(string: str) -> List[str]:
    for i in range(len(string) + 1):
        prefix = string[:i]
        if len(prefix) == 0 or not (prefix in string):
            break
        result.append(prefix)
    return result