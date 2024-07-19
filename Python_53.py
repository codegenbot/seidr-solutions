def add(a, b):
    return a + b

try:
    while True:
        try:
            line = input("Enter two integers separated by space: ").strip()
            x, y = map(int, line.split())
            result = add(x, y)
            print(result)
        except (ValueError, EOFError, KeyboardInterrupt):
            print("Invalid input. Please enter two integers separated by space.")
except EOFError:
    pass