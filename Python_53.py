def add(x: int, y: int):
    return x + y

x, y = map(int, input("Enter two integers: ").split())
result = add(x, y)
print(result)