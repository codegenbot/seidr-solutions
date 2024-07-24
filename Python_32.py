def find_zero():
    while True:
        try:
            a = float(input("Enter coefficient a: "))
            b = float(input("Enter coefficient b: "))
            c = float(input("Enter constant c: "))
            break
        except ValueError:
            print("Invalid input. Please enter a number.")

    discriminant = (b**2) - (4 * a * c)

    if a == 0:
        return f"Root: {-c / b}"
    else:
        if discriminant > 0:
            root1 = (-b + discriminant**0.5) / (2 * a)
            root2 = (-b - discriminant**0.5) / (2 * a)
            return f"Roots: {root1} and {root2}"
        elif discriminant == 0:
            root = -b / (2 * a)
            return f"Root: {root}"
        else:
            return "No real roots"