def add(a, b):
    return a + b

try:
    while True:
        x, y = map(int, input().strip().split())
        result = add(x, y)
        print(result)
except EOFError:
    pass
except ValueError:
    print("Invalid input. Please provide two integers separated by space.")