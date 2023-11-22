def add(x: int, y: int):
    return x + y

x, y = map(int, input("Please enter two integers: ").split())

result = add(x, y)
print(result)