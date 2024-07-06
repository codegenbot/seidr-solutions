```
def add(x: int, y: int):
    return x + y

while True:
    try:
        x = int(input("Enter the first number: "))
        if -2**31 <= x <= 2**31 -1:
            y = int(input("Enter the second number: "))
            if -2**31 <= y <= 2**31 -1:
                print(f"The sum is {x + y}")
                break
    except ValueError:
        print("Invalid input. Please enter a whole number.")