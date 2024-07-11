def quadratic_equation():
    while True:
        print("Enter coefficients (a b c [d]): ")
        try:
            xs = input().split()
            if len(xs) not in [3, 4]:
                raise ValueError
            a, b, c = map(int, xs[0:3])
            d = int(xs[3]) if len(xs) == 4 else None
            break
        except ValueError:
            print("Invalid input. Please enter coefficients (a b c [d]).")
    p = (b**2) - (4 * a * c)
    return p