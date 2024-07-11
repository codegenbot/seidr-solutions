def add(x, y) -> int:
    return x + y

try:
    x = int(input("Enter the first number: ")) # Enter first number
    y = int(input("Enter the second number: ")) # Enter second number

    result = add(x, y)

    print(result)

except ValueError:
    print("Please enter valid integers as input.")