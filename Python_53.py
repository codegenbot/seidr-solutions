def add(x: int, y: int) -> int:
    return x + y

while True:
    try:
        x = int(input("Enter the first number: "))
        y = int(input("Enter the second number: "))
        break
    except ValueError:
        print("Please enter integer values.")

result = add(x, y)

print(result)