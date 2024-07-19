import sys

def add(a, b):
    return a + b

# read input from standard input
try:
    for line in sys.stdin:
        x, y = map(int, line.strip().split())
        result = add(x, y)
        print(result)
except EOFError:
    pass