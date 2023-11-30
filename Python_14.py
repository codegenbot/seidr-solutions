from typing import List
import sys

def all_prefixes(string: str) -> List[str]:
    prefixes = []
    for i in range(len(string)):
        prefixes.append(string[: i + 1])
    return prefixes

string = sys.stdin.readline().strip()
prefixes_list = all_prefixes(string)
print(prefixes_list)