def add(x: int, y: int) -> int:
    return x + y

while True:
    try:
        x, y = map(int, input("Enter two numbers separated by space: ").split())
        break
    except ValueError:
        print("Please enter two integers separated by a space.")
        continue

result = add(x, y)
print("The sum is:", result)