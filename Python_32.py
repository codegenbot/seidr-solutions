def find_zero():
    while True:
        try:
            coefficients = [float(i) for i in input("Enter the coefficients a, b, and c (space separated): ").split()]
            if len(coefficients) != 3:
                raise ValueError
            a, b, c = coefficients
            x1 = (-b + (b**2 - 4*a*c)**0.5) / (2*a)
            x2 = (-b - (b**2 - 4*a*c)**0.5) / (2*a)
            return f"The zero points are {x1:.2f} and {x2:.2f}."
        except ValueError:
            print("Invalid input. Please provide three coefficients.")