def add(x, y) -> int:
    return x + y


while True:
    try:
        x = int(input("Enter the first number: "))
        y = int(input("Enter the second number: "))

        result = add(x, y)

        print(result)
        break

    except ValueError:
        print("Please enter valid integers as input.")