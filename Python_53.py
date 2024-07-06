def add(x: int, y: int):
    return x + y

while True:
    try:
        x = int(input("Enter the first number: "))
        if -2**31 <= x <= 2**31 -1:
            y = int(input("Enter the second number: "))
            if -2**31 <= y <= 2**31 -1:
                print(f"The sum is {add(x, y)}")
                
                while True:
                    cont = input("Do you want to add again? (y/n): ")
                    if cont.lower() == 'n':
                        break
    except ValueError:
        print("Invalid input. Please enter a whole number.")