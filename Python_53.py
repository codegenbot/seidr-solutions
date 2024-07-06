def add(x: int, y: int):
    return x + y

while True:
    try:
        choice = input("Do you want to calculate? (yes/no): ")
        if choice.lower() == "no":
            break
        x = int(input("Enter the first number: "))
        if -2**31 <= x <= 2**31 -1:
            y = int(input("Enter the second number: "))
            if -2**31 <= y <= 2**31 -1:
                print(f"The sum is {add(x, y)}")
    except ValueError:
        print("Invalid input. Please enter a whole number.")