def add(x: int, y: int):
    return x + y

while True:
    try:
        x = int(input("Enter the first number: "))
        y = int(input("Enter the second number: "))
        break
    except ValueError:
        print("Please enter valid integers.")
        
result = add(x, y)
print(f"The result of adding {x} and {y} is: {result}")