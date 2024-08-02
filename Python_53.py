def add(x: int, y: int):
    return x + y


inputs = raw_input("Enter two integers separated by a space: ").split()
x, y = [int(num) for num in inputs]

result = add(x, y)
print("Sum of the two integers:", result)