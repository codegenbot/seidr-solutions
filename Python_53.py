def add(a, b):
    return a + b

try:
    while True:
        line = input().strip()
        if line == '':
            break
        x, y = map(int, line.split())
        result = add(x, y)
        print(result)
except ValueError:
    print("Invalid input. Please provide two integers separated by space.")
except EOFError:
    pass