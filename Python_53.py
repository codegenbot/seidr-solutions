def add(x: int, y: int):
    return x + y

while True:
    try:
        input_line = input().strip()
        if not input_line:
            continue
        x, y = map(int, input_line.split())
        print(add(x, y))
    except (ValueError, EOFError):
        print("Invalid input")