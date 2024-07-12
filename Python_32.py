def calculate_quadratic_roots():
    try:
        coefficients = list(
            map(float, input("Enter coefficients (space-separated): ").split())
        )
        a, b, c = coefficients

        if a == 0:
            print("Error: The coefficient 'a' cannot be zero.")
        else:
            discriminant = b**2 - 4 * a * c
            if discriminant < 0:
                print("The equation has no real roots.")
            elif discriminant == 0:
                root = -b / (2 * a)
                print(f"The equation has one root: {round(root, 2)}")
            else:
                root1 = (-b + math.sqrt(discriminant)) / (2 * a)
                root2 = (-b - math.sqrt(discriminant)) / (2 * a)
                print(
                    f"The equation has two roots: {round(root1, 2)} and {round(root2, 2)}"
                )
    except ValueError as e:
        print(f"Error: {e}")