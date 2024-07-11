def find_zero():
    xs = input("Enter coefficients of the polynomial (space separated): ")
    try:
        xs = list(map(float, xs.split()))
    except ValueError:
        print("Invalid input. Please enter numbers only.")
        return None

    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[0]
    b = sum([coeff for i, coeff in enumerate(xs) if i % 2 == 1])
    c = xs[-1]

    if c == 0 or b == 0:
        return None

    result = -b / (2 * c)
    print("The zero of the polynomial is: ", result)


find_zero()