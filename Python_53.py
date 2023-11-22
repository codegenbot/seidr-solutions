def add(x: int, y: int):
    return x + y

x, y = map(int, input().rstrip().split())

result = add(x, y)
print(result)