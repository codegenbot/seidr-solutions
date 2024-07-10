def add(x, y):
    return x + y

try:
    x, y = map(int, input().strip().split())
    result = add(x, y)
    print(result)
except ValueError:
    print("Error: Invalid input")