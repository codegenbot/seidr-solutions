def add(x: int, y: int):
    return int(x) + int(y)

x, y = input("Please enter two integers: ").split()

result = add(x, y)
print(result)