import sys

def add(a, b):
    return a + b

try:
    while True:
        line = sys.stdin.readline().strip()
        if line == '':
            break
        x, y = map(int, line.split())
        result = add(x, y)
        print(result)
except (ValueError, EOFError, KeyboardInterrupt):
    pass