```
from typing import List


def all_prefixes_and_suffixes(string: str) -> List[str]:
    result = []
    for i in range(len(string)+1):
        if i == 0:
            prefix = ""
        else:
            prefix = string[:i]
        for j in range(len(string), -1, -1):
            if j == len(string):
                suffix = string
            else:
                suffix = string[j:]
            result.append(prefix + suffix)
    return result