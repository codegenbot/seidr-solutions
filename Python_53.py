def add(x: int, y: int):
    return x + y

inputs = input("Enter two integers separated by a space: ").split()
x, y = map(int, inputs)

result = add(x, y)
print("Sum of the two integers:", result)