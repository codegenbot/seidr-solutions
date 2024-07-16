def add(a, b):
    return a + b

try:
    num1 = int(input("Enter first number: "))
    num2 = int(input("Enter second number: "))

    num1 = int(num1)
    num2 = int(num2)

    result = add(num1, num2)
    print(result)

except ValueError:
    print("Please enter valid integers for both numbers.")