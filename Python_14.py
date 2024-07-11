from typing import List

def all_prefixes(string: str) -> List[str]:
    result = []
    for length in range(1, len(string) + 1):
        for i in range(len(string) - length + 1):
            prefix = string[i:i+length]
            result.append(prefix)
    return result