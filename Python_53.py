def add(x: int, y: int) -> int:
    return int(x) + int(y)

x, y = input("Enter two numbers separated by space: ").split()
result = add(x, y)
print(f"The sum is: {result}")