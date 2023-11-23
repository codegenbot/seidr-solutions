import sys
from typing import List

def concatenate(strings: List[str]) -> str:
    result = ''.join(strings).lower()
    return result

if __name__ == '__main__':
    input_strings = sys.stdin.readline().strip().split(",")
    output = concatenate(input_strings)
    print(output)