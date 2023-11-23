from typing import List
import sys


def all_prefixes(string: str) -> List[str]:
    prefixes = []
    for i in range(1, len(string) + 1):
        prefixes.append(string[:i])
    return prefixes


input_string = sys.argv[1]
result = all_prefixes(input_string)
print(result)