def add(a, b):
    return a + b


# Read input until EOF is encountered
while True:
    try:
        x, y = map(int, input().split())
        result = add(x, y)
        print(result)
    except ValueError:
        break