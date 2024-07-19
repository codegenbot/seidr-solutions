def add(x: int, y: int) -> int:
    return x + y

# Read input from multiline input
import sys
lines = sys.stdin.readlines()
a, b = map(int, lines[0].split())
result = add(a, b)
print(result)