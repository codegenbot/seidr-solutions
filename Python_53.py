def add(a, b):
    return a + b

try:
    num1 = int(input("Enter first number: ").strip())
    num2 = int(input("Enter second number: ").strip())

    if num2 == 0:
        raise ZeroDivisionError

    result = add(num1, num2)
    print(result)

except ValueError:
    print("Please enter valid integers for both numbers.")

except ZeroDivisionError:
    print("Cannot divide by zero")

except NameError:
    print("Error while reading input.")

except Exception as e:
    print("An error occurred:", e)