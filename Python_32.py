n = int(input("Enter number of coefficients: "))
coefficients = [float(x) for x in input(f"Enter {n} coefficients separated by space: ").split()]
try:
    if len(coefficients) % 2 != 0:
        raise ValueError("Coefficients must have even number of terms")
    a = coefficients[-1]
    b = -sum([x for x in coefficients[:-1]])
    print(f"The value of zero is: {round(-b / (2 * a), 2)}')
except ValueError as e:
    print(e)