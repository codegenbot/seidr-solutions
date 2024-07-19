import sys

def add(a, b):
    return a + b

# read input until EOFError
while True:
    try:
        line = sys.stdin.readline()
        if not line:
            break
        x, y = map(int, line.strip().split())
        result = add(x, y)
        print(result)
    except EOFError:
        break