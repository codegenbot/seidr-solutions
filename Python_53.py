```
def add(x: int, y: int):
    return x + y

while True:
    try:
        x = int(input("Enter first number: "))
        y = int(input("Enter second number: "))
        print(f"The sum of the given numbers is {add(x, y)}")
        break
    except ValueError:
        print("Invalid inputs. Please enter integers.")