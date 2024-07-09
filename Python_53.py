import sys

def add(x: int, y: int):
    return x + y

if len(sys.argv) < 3:
    print("Please provide two integers as command line arguments.")
else:
    x = int(sys.argv[1])
    y = int(sys.argv[2])
    result = add(x, y)
    print(result)