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
            p = (b**2) - (4 * a * c)
            if p < 0:
                result = -b / a
                print(f"There is one solution: {result}.")
            else:
                r1 = (-b + p ** (0.5)) / (2 * a)
                r2 = (-b - p ** (0.5)) / (2 * a)
                print(f"The solutions are {r1} and {r2}.")
    except ValueError:
        print("Invalid input. Please enter exactly 3 or 4 coefficients: ")
    except Exception as e:
        print(f"An error occurred: {e}")