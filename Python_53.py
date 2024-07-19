def add(a, b):
    return a + b


# read input from user
while True:
    try:
        x, y = map(int, input().strip().split())
        result = add(x, y)
        print(result)
    except EOFError:
        break