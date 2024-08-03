n = int(input("Enter the number of coefficients: "))
xs = list(map(int, input("Enter the coefficients (space separated): ").split()))
try:
    if n % 2 != 0:
        raise ValueError("Coefficients must have even number of elements")
    a = xs[-1]
    b = -sum(x for x in xs[:-1])
    print(round(-b / (2 * a), 2))
except ValueError as e:
    print(e)