import sys
from typing import List

def all_prefixes() -> List[str]:
    string = sys.stdin.readline().strip()
    prefixes = [string[:i + 1] for i in range(len(string))]
    return prefixes

prefixes_list = all_prefixes()
print(prefixes_list)