```
while True:
    print("Enter coefficients (a b c [d]): ")
    try:
        xs = [int(i) for i in input().split()]
        if len(xs) not in [3, 4]:
            raise ValueError
        d = xs[3] if len(xs) == 4 else None
        if d is not None:
            if d != 0:
                b, c = xs[1], xs[2]
                a = xs[0]
                p = (b**2) - (4*a*c)
                if p >= 0:
                    r1 = (-b + p**(0.5)) / (2 * a)
                    r2 = (-b - p**(0.5)) / (2 * a)
                    print(f"The solutions are {r1} and {r2}.")
                else:
                    result = -b / a
                    print(f"There is one solution: {result}.")
            else: # linear equation
                b, c = xs[1], xs[2]
                a = xs[0]
                result = -b / a
                print(f"There is one solution: {result}.")
        elif len(xs) == 3:
            a, b, c = xs
            result = -b / a
            print(f"The solution is {result}.")
        else: 
            raise ValueError("Invalid input. Please enter exactly 3 or 4 coefficients: ")
    except ValueError as e:
        print(e)