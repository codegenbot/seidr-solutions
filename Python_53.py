```
def add(x: int, y: int):
    return x + y
while True:
    try:
        x = int(input("Enter first number: "))
        y = int(input("Enter second number: "))
        print(f"The sum is {add(x,y)}")
    except ValueError:
        print("Invalid input. Please enter integers.")