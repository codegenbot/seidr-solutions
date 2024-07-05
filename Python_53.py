def add(x: int, y: int):
    return x + y

try:
    input_line = input().strip()
    parts = input_line.split()
    if len(parts) != 2:
        raise ValueError
    x, y = map(int, parts)
    print(add(x, y))
except (ValueError, EOFError, TypeError):
    print("Invalid input")