import sys
from typing import List

def all_prefixes(string: str) -> List[str]:
    return [string[: i + 1] for i in range(len(string)]

try:
    while True:
        input_string = sys.stdin.readline().strip()
        print(all_prefixes(input_string))
except EOFError:
    pass