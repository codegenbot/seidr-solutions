import sys

def add(a, b):
    return a + b

# read input from standard input until EOF
lines = sys.stdin.readlines()
for line in lines:
    if line.strip():
        x, y = map(int, line.strip().split())
        result = add(x, y)
        print(result)