import sys

from typing import List

def all_prefixes(string: str) -> List[str]:
    prefixes = []
    for i in range(1, len(string) + 1):
        prefixes.append(string[:i])
    return prefixes

if __name__ == '__main__':
    input_string = sys.stdin.readline().strip()
    result = all_prefixes(input_string)
    for prefix in result:
        print(prefix)