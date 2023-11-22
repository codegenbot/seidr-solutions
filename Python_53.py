def add(x: int, y: int):
    return x + y


x, y = map(int, input("Enter values of x and y separated by a space: ").split())

result = add(x, y)
print(result)