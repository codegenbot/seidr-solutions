def add(x: int, y: int):
    return x + y

import sys

try:
    for input_line in sys.stdin:
        input_line = input_line.strip()
        if not input_line:
            raise ValueError
        x, y = map(int, input_line.split())
        print(add(x, y))
except (ValueError, EOFError):
    print("Invalid input")