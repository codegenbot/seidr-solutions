```
def add(x: int, y: int):
    return x + y

while True:
    response = input("Do you want to calculate the sum or quit? (yes/no): ")
    if response.lower() != "yes":
        break
    try:
        x = int(input("Enter first number: "))
        y = int(input("Enter second number: "))
        print("The sum is: ", add(x, y))
    except ValueError:
        print("Invalid input. Please enter an integer.")