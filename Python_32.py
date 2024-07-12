def find_zero():
    while True:
        try:
            line1 = list(map(float, input("Enter coefficients for the first line (a b): ").split()))
            line2 = list(map(float, input("Enter coefficients for the second lines (c d): ").split()))
            if len(line1) != 2 or len(line2) != 2:
                print("Invalid input. Please enter two numbers.")
                continue
            a, b = line1
            c, d = line2
            if a - c == 0: 
                return "The lines are parallel."
            x = round((d - b) / (a - c), 2)
            y = round(a * x + b, 2)
            return f"The intersection point is at ({x}, {y})."