def add(x: int, y: int) -> int:
    return x + y

while True:
    try:
        x, y = map(int, input("Enter two numbers separated by space: ").split())
        break
    except ValueError:
        print("Invalid input. Please enter two valid integers separated by space.")

result = add(x, y)
print("The sum is:", result)