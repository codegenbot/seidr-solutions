import sys

n = int(sys.stdin.readline())
strings = [sys.stdin.readline().strip() for _ in range(n)]

def concatenate(strings: list) -> str:
    return ''.join(strings)

result = concatenate(strings)

print(result)