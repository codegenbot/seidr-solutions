def add(x, y):
    return x + y

x, y = map(int, input().strip().split())
result = add(x, y)
print(result)