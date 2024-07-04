def add(x: int, y: int):
    return x + y

x, y = map(int, input().strip().split())
print(add(x, y))