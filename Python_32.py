n = int(input("Enter number of coefficients: "))
coefficients = [
    int(x) for x in input(f"Enter {n} coefficients (space separated): ").split()
]
try:
    if len(coefficients) % 2 != 0:
        raise ValueError("Coefficients must have even number of terms")
    a = coefficients[-1]
    b = -sum(coefficients[:-1])
    print(round(-b / (2 * a), 2))
except ValueError as e:
    print(str(e))