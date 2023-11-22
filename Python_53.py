def add(x: int, y: int):
    return x + y


# Read input from user
x, y = map(int, input().strip().split())

result = add(x, y)
print(result)