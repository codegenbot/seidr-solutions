```
def quadratic_formula():
    while True:
        try:
            xs = [int(i) for i in input("Enter coefficients (a b c [d]): ").split()]
            if len(xs) not in [3, 4]:
                raise ValueError
            a, b, c = xs[:3]
            d = xs[3] if len(xs) == 4 else 0
            root1 = (-b + pow(d, 0.5)) / (2 * a)
            root2 = (-b - pow(d, 0.5)) / (2 * a)
            print(f"Roots are {root1} and {root2}")
            break
        except ValueError:
            print("Invalid input. Please enter exactly 3 or 4 coefficients: ")