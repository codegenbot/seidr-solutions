def add(x: int, y: int):
    return x + y

x = input("Enter first number: ")
y = input("Enter second number: ")

if not (x.isnumeric() and y.isnumeric()):
    print("Invalid inputs. Please enter integers.")
else:
    print("The sum of the given numbers is", add(int(x), int(y)))