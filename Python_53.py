def add(a, b):
    return a + b

try:
    while True:
        try:
            line = input("Enter two integers separated by space: ").strip()
            if line == '':
                break
            x, y = map(int, line.split())
            result = add(x, y)
            print(result)
        except ValueError:
            pass
except (EOFError, KeyboardInterrupt):
    print("Exiting the program.")