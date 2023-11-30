from typing import List
import sys


def all_prefixes(string: str) -> List[str]:
    prefixes = []
    if string: 
        for i in range(len(string)): 
            prefixes.append(string[: i + 1])
    return prefixes


prefixes_list = all_prefixes(sys.argv[1])
print(prefixes_list)