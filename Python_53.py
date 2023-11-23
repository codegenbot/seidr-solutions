def add(x, y):
    return x + y

import sys
x, y = map(int, sys.stdin.readline().split())

print(add(x, y))