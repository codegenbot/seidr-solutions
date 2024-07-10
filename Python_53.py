def add(a, b):
    return a + b

while True:
    try:
        x = int(input("Enter first number: "))
        y = int(input("Enter second number: "))
        print(f"The sum of {x} and {y} is {add(x,y)}")
        break
    except ValueError:
        print("Invalid input. Please enter integers.")