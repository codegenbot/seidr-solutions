x, y = map(int, input("Enter two numbers separated by space: ").split())

def add(x: int, y: int) -> int:
    return x + y

result = add(x, y)

print("The sum is:", result)