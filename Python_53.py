def add(x: int, y: int):
    return x + y

try:
    input_line = input().strip()
    if input_line:
        x, y = map(int, input_line.split())
        print(add(x, y))
    else:
        print("Invalid input")
except (ValueError, EOFError):
    print("Invalid input")