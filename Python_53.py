def add(a, b):
    return a + b

try:
    while line != '':
        line = raw_input("Enter two integers separated by space: ").strip()
        if line == '':
            break
        x, y = map(int, line.split())
        result = add(x, y)
        print(result)
except (EOFError, KeyboardInterrupt):
    break
except ValueError:
    pass