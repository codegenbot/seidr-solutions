def add(a, b):
    return a + b

try:
    num1, num2 = map(int, input("Enter two numbers separated by space: ").split())
    print(add(num1, num2))

except ValueError:
    print("Please enter valid integers for both numbers.")

except ZeroDivisionError:
    print("Cannot divide by zero")

except Exception as e:
    print("An error occurred:", e)