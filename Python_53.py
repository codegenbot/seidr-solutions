```
def subtract(x: int, y: int) -> int:
    return x - y

while True:
    try:
        while True:
            x = input("Enter the first number (or 'q' to quit): ")
            if x == "q":
                break
            elif x.replace('-', '',).replace('.', '').isnumeric():
                x = int(x)
                if -2**31 <= x <= 2**31 -1:
                    while True:
                        y = input("Enter the second number (or 'q' to quit): ")
                        if y == "q":
                            break
                        elif y.replace('-', '',).replace('.', '').isnumeric():
                            y = int(y)
                            if -2**31 <= y <= 2**31 -1:
                                while True:
                                    choice = input("Do you want to add or subtract? (or 'q' to quit): ")
                                    if choice == "q":
                                        break
                                    elif choice.lower() in ['add', 'a']:
                                        print(f"The sum is {add(x, y)}")
                                        break
                                    elif choice.lower() in ['subtract', 'sub', '-']:
                                        print(f"The difference is {subtract(x, y)}")
                                        break
                                    else:
                                        print("Invalid input. Please enter 'add' or 'subtract'.")
                            else:
                                print("Invalid input. Please enter a whole number.")
                        else:
                            print("Invalid input. Please enter a whole number.")
                    break
                else:
                    print("Invalid input. Please enter a whole number.")
            else:
                print("Invalid input. Please enter a whole number.")
    except ValueError:
        print("Invalid input. Please enter a whole number.")