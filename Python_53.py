def add(a, b):
    if b == 0:
        raise ZeroDivisionError("Cannot divide by zero")
    return a + b

try:
    num1 = int(input("Enter first number: ").strip())
    num2 = int(input("Enter second number: ").strip())

    result = add(num1, num2)
    print(result)

except ValueError:
    print("Please enter valid integers for both numbers.")

except ZeroDivisionError as e:
    print(e)

except Exception as e:
    print("An error occurred:", e)