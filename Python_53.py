import sys

def add(a, b):
    return a + b

# read input from standard input
lines = sys.stdin.read().strip().split('\n')
for line in lines:
    x, y = map(int, line.strip().split())
    result = add(x, y)
    print(result)