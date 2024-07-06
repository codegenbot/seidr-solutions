```
def add(x: int, y: int):
    return x + y

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
                                print(f"The sum is {add(x, y)}")
                                break
                            else:
                                print("Invalid input. Please enter a whole number.")
                                continue
                        else:
                            print("Invalid input. Please enter a whole number.")
                            continue
                    break
                else:
                    print("Invalid input. Please enter a whole number.")
                    continue
    except ValueError:
        print("Invalid input. Please enter a whole number.")