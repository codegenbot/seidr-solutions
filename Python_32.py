```
def quadratic_equation():
    while True:
        try:
            print("Enter coefficients (space-separated): ")
            coefficients = list(map(float, input().split()))
            a, b, c = coefficients[0], coefficients[1], coefficients[2]
            
            import math
            
            discriminant = b**2 - 4 * a * c
            
            if discriminant > 0:
                root1 = (-b + math.sqrt(discriminant)) / (2 * a)
                root2 = (-b - math.sqrt(discriminant)) / (2 * a)
                print(f"Roots: {root1} and {root2}")
            elif discriminant == 0:
                root = -b / (2 * a)
                print(f"Root: {root}")
            else:
                print("No real roots")
            break
        except ValueError:
            print("Invalid input. Please enter three numbers separated by spaces.")

if __name__ == "__main__":
    quadratic_equation()