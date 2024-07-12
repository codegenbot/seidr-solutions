from typing import List

def all_prefixes(string: str) -> List[str]:
    result = [""]
    for char in string:
        result.extend([p + char for p in result])
    return result

print(all_prefixs("abc"))