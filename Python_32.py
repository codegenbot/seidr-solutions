def find_zero():
    while True:
        try:
            coefficients = [float(i) for i in input().split()]
            if len(coefficients) != 3:
                print("Invalid input. Please provide exactly three coefficients.")
                continue
            a, b, c = coefficients
            x1 = (-b + (b**2 - 4*a*c)**0.5) / (2*a)
            x2 = (-b - (b**2 - 4*a*c)**0.5) / (2*a)
            return f"The zero points are {x1:.2f} and {x2:.2f}."