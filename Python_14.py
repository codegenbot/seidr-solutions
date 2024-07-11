```
from typing import List


def all_prefixes(string: str) -> List[str]:
    result = ['']
    for char in string:
        temp = []
        for prefix in result:
            temp.append(prefix + char)
        result = temp
    return result