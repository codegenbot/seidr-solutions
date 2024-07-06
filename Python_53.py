```
def add(x: int, y: int) -> int:
    return x + y


while True:
    while True:
        x = input("Enter the first number (or 'q' to quit): ")
        if x == "q":
            return
        elif x.replace("-", "",).replace(".", "").isnumeric():
            try:
                x = int(x)
                if -(2**31) <= x <= 2**31 - 1:
                    while True:
                        y = input("Enter the second number (or 'q' to quit): ")
                        if y == "q":
                            return
                        elif y.replace("-", "",).replace(".", "").isnumeric():
                            try:
                                y = int(y)
                                if -(2**31) <= y <= 2**31 - 1:
                                    print(f"The sum is {add(x, y)}")
                                    return
                                else:
                                    print("Invalid input. Please enter a whole number.")
                            except ValueError:
                                print("Invalid input. Please enter a whole number.")
                        else:
                            print("Invalid input. Please enter a whole number.")
                    break
                else:
                    print("Invalid input. Please enter a whole number.")
            except ValueError:
                print("Invalid input. Please enter a whole number.")
        else:
            print("Invalid input. Please enter a whole number.")