def add(x: int, y: int):
    return x + y

x, y = [int(i) for i in input().split()]

result = add(x, y)
print(result)