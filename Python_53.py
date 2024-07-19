def add(a, b):
    return a + b

try:
    while True:
        line = input().strip()
        if not line:
            break
        x, y = map(int, line.split())
        result = add(x, y)
        print(result)
except (EOFError, KeyboardInterrupt):
    print("Exiting the program.")