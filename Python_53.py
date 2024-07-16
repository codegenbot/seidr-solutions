def add(a, b):
    return a + b

try:
    num1, num2 = map(int, input("Enter two numbers separated by space: ").split())
    result = add(num1, num2)
    print(result)

except ValueError:
    print("Please enter valid integers for both numbers.")

except:
    print("Error while reading input.")