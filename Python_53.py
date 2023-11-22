def add(x: int, y: int):
    return x + y

try:
    x, y = map(int, input().split())
    result = add(x, y)
    print(result)
except:
    print("Invalid input format")