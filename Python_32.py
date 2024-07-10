def find_zero():
    n = int(input("Enter the number of coefficients: "))
    xs = list(map(float, input("Enter coefficients (space-separated): ").split()))

    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")

    return -xs[1] / xs[-1]