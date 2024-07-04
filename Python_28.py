from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

if __name__ == "__main__":
    import sys
    input = sys.stdin.read().strip().split()
    print(concatenate(input))