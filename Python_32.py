def find_zero():
    coefficients = []
    while True:
        try:
            coefficient = float(input("Enter a coefficient (or 'q' to quit): "))
            if coefficient == "q":
                break
            coefficients.append(coefficient)
        except ValueError:
            print("Invalid input. Please enter a number or 'q' to quit.")

    if len(coefficients) % 2 != 0:
        raise ValueError("The number of coefficients must be even")

    x = -coefficients[1] / coefficients[3]
    return round(x, 2)