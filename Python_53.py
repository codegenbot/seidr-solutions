def add(x: int, y: int):
    return x + y

x, y = map(int, input().split())

result = add(x, y)
print(result)