def add(x: int, y: int) -> int:
    return x + y

# Read input as a single line
x, y = map(int, input("Enter two numbers separated by a space: ").split())

result = add(x, y)
print(result)