import sys
from typing import List

def all_prefixes(string: str) -> List[str]:
    prefixes = []
    for i in range(1, len(string) + 1):
        prefixes.append(string[:i])
    return prefixes

input_string = sys.stdin.readlines()
result = all_prefixes(input_string[0].strip())
print(result)