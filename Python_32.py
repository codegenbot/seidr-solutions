n = int(input("Enter the number of coefficients: "))
coefficients = [
    float(x) for x in input(f"Enter {n} coefficients (space separated): ").split()
]
try:
    if len(coefficients) % 2 != 0:
        raise ValueError("The number of coefficients must be even")
    a = coefficients[-1]
    b = -sum(x for x in coefficients[:-1])
    print(round(-b / (2 * a), 2))
except ValueError as e:
    print(e)