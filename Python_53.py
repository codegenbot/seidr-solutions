def add(x: int, y: int):
    return x + y

import sys
input = sys.stdin.read

try:
    data = input().strip().split()
    for i in range(0, len(data), 2):
        x, y = int(data[i]), int(data[i+1])
        print(add(x, y))
except (ValueError, IndexError, EOFError):
    print("Invalid input")