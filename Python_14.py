from typing import List


def all_prefixes(string: str) -> List[str]:
    result = [""]  
    for i, char in enumerate(string):
        result.append(char)  
    result.append(string)  
    for i, char in enumerate(string):
        result.extend([string[j : i + 1] for j in range(i + 1)])
    result.sort()
    return result