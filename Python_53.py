def add(a, b):
    return a + b


try:
    num1 = int(input("Enter first number: "))
    num2 = int(input("Enter second number: "))

    if type(num1) == int and type(num2) == int:
        result = add(num1, num2)
        print(result)
    else:
        raise ValueError

except ValueError:
    print("Please enter valid integers for both numbers.")