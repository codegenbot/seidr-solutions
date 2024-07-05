from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]

if __name__ == "__main__":
    import sys
    input = sys.stdin.read
    data = input().split()
    substring = data[0]
    strings = data[1:]
    result = filter_by_substring(strings, substring)
    for r in result:
        print(r)