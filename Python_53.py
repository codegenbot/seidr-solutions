def add(x: int, y: int) -> int:
    return x + y

while True:
    try:
        x = int(input("Enter the first number: "))
        y = int(input("Enter the second number: "))
        break
    except ValueError:
        print("Please enter integers only")

result = add(x, y)
print(f"The sum is: {result}")