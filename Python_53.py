def add(x: int, y: int):
    return x + y

x, y = map(int, input("Enter two integers separated by a space: ").split(maxsplit=1))

result = add(x, y)
print("Sum of the two integers:", result)