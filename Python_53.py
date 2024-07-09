x = int(input("Enter first number: ").strip())
y = int(input("Enter second number: ").strip())

def add(x: int, y: int) -> int:
    return x + y

print(add(x, y))