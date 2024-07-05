def add(x: int, y: int):
    return x + y

try:
    while True:
        input_line = input().strip()
        if not input_line:
            break
        x, y = map(int, input_line.split())
        print(add(x, y))
except (ValueError, EOFError):
    print("Invalid input")