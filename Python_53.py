def add(x: int, y: int):
    return x + y

x = int(input("Enter the first integer number: ").strip())
y = int(input("Enter the second integer number: ").strip())

result = add(x, y)
print(result)