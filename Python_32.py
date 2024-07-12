import math
if __name__ == "__main__":
    try:
        coefficients = list(map(float, input("Enter coefficients (space-separated): ").split()))
        n = len(coefficients)
        
        if n % 2 != 0:
            raise ValueError("xs must have even number of coefficients")
        
        a = coefficients[0]
        b = coefficients[1]
        c = coefficients[2] if n > 2 else 0
        d = coefficients[3] if n > 3 else 0
        
        x = (-b + math.sqrt(b**2 - 4 * a * c)) / (2 * a)
        
        print(round(x, 2))
    except ValueError as e:
        print(f"Error: {e}")