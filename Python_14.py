from typing import List
import sys

def all_prefixes() -> List[str]:
    string = sys.stdin.readline().rstrip('\n')
    prefixes = []
    if string:
        for i in range(len(string)):
            prefixes.append(string[: i + 1])
    return prefixes

prefixes_list = all_prefixes()
print(prefixes_list)