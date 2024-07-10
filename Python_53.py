```
def add(x: int, y: int):
    return x + y

while True:
    try:
        x = int(input("Enter first number: "))
        break
    except ValueError:
        print("Invalid inputs. Please enter integers.")

while True:
    try:
        y = int(input("Enter second number: "))
        break
    except ValueError:
        print("Invalid inputs. Please enter integers.")

if x < 0 or y < 0:
    print("Please enter non-negative numbers.")
else:
    print("The sum of the given numbers is", add(x, y))