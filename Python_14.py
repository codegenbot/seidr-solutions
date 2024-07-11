from typing import List

def all_prefixes(string: str) -> List[str]:
    result = [""]
    for i in range(len(string)):
        prefix = string[:i+1]
        suffix = string[i:]
        result.extend([p + s for p in result for s in ([], prefix, suffix)])
    return list(set(result))