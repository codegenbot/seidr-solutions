def add(x: int, y: int):
    return x + y

x = int(input("Enter first number: "))
y = int(input("Enter second number: "))

try:
    if x < 0 or y < 0:
        print("Please enter non-negative numbers.")
    else:
        print("The sum of the given numbers is", add(x, y))
except ValueError:
    print("Invalid inputs. Please enter integers.")