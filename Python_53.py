def add(a, b):
    return a + b

while True:
    try:
        num1 = int(input("Enter first integer number: ").strip())
        num2 = int(input("Enter second integer number: ").strip())

        result = add(num1, num2)
        print(result)
        break

    except ValueError:
        print("Please enter valid integers for both numbers.")