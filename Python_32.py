```
if __name__ == "__main__":
    try:
        xs = list(map(float, input("Enter coefficients (space-separated): ").split()))
        n = len(xs)
        
        if any(x < 0 for x in xs):
            raise ValueError("xs must have non-negative coefficients")
        
        if n != 4:
            print("Error: Please enter exactly four coefficients.")
        else:
            a, b, c, d = xs
            discriminant = b**2 - 4 * a * c
            if discriminant < 0:
                print("Complex roots!")
            elif discriminant == 0:
                x = (-b) / (2 * a)
                print(round(x, 2))
            else:
                x1 = (-b + math.sqrt(discriminant)) / (2 * a)
                x2 = (-b - math.sqrt(discriminant)) / (2 * a)
                print(f"Roots: {round(x1, 2)} and {round(x2, 2)}")
    except ValueError as e:
        print(f"Error: {e}")