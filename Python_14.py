import sys
from typing import List

def all_prefixes() -> List[str]:
    string = sys.stdin.readline().rstrip('\n')
    prefixes = []
    for i in range(len(string)):
        prefixes.append(string[: i + 1])
    return prefixes

prefixes_list = all_prefixes()
for prefix in prefixes_list:
    sys.stdout.write(prefix + '\n')