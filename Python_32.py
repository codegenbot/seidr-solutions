```
while True:
    try:
        xs = [int(i) for i in input("Enter coefficients (a b c [d]): ").split()]
        if len(xs) not in [3, 4]:
            raise ValueError
        break
    except ValueError:
        print("Invalid input. Please enter exactly 3 or 4 coefficients: ")