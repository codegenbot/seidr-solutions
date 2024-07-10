def add(x: int, y: int):
    return x + y

x = input("Enter first number: ")
y = input("Enter second number: ")

try:
    x = int(x)
    y = int(y)

    print("The sum of the given numbers is", add(x, y))

except ValueError:
    print("Invalid inputs. Please enter integers.")