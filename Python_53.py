import sys

def add(a, b):
    return a + b

# Read input line by line from standard input
for line in sys.stdin:
    x, y = map(int, line.strip().split())
    result = add(x, y)
    print(result)