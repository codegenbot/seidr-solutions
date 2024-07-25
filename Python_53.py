def add(x: int, y: int):
    return x + y

try:
    x, y = map(int, input("Enter two numbers separated by space: ").split())
    result = add(x, y)
    print("Sum:", result)
except ValueError:
    print("Please enter integers only.")