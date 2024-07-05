from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

if __name__ == "__main__":
    strings = input().split()
    print(concatenate(strings))