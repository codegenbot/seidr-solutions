```
def add(x, y):
    return x + y

while True:
    try:
        x = int(input("Enter first number: ") or 0)
        y = int(input("Enter second number: ") or 0)
        if y == 0:
            print("Please enter a non-zero value for the second number.")
        else:
            break
    except ValueError:
        print("Invalid input. Please try again.")
print(add(x, y))