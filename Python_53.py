def add(x: int, y: int):
    return x + y

a, b = map(int, input().strip().split())
result = add(a, b)
print(result)