x = int(input("Enter the first number: "))
y = int(input("Enter the second number: "))

def add(x: int, y: int) -> int:
    return x + y

result = add(x, y)
print(result)