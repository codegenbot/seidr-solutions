import sys

def add(a, b):
    return a + b

# Read input line by line from standard input
for line in sys.stdin:
    try:
        x, y = map(int, line.strip().split())
        result = add(x, y)
        print(result)
    except ValueError:
        print("Invalid input. Please provide two integers separated by space.")