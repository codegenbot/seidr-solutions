```
while True:
    try:
        xs = [int(i) for i in input("Enter coefficients (a b c [d]): ").split()]
        if len(xs) not in [3, 4]:
            raise ValueError
        if len(xs) == 3:
            a, b, c = xs
            result = -b / a
            print(f"The solution is {result}.")
        elif len(xs) == 4:
            a, b, c, d = xs
            result = (c - b) / a
        if abs(result) < 0.0001: 
            print("The equation has no real solutions.")
        else:
            print(f"The solution is {result}.")
    except ValueError:
        print("Invalid input. Please enter exactly 3 or 4 coefficients: ")