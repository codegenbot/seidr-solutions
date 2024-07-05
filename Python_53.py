def add(x: int, y: int):
    return x + y

try:
    input_line = input().strip()
    numbers = input_line.split()
    if len(numbers) != 2:
        raise ValueError
    x, y = map(int, numbers)
    print(add(x, y))
except (ValueError, EOFError, TypeError):
    print("Invalid input")