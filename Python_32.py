import math

def find_zero(coefficients: list):
    if len(coefficients) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = coefficients[0]
    b = coefficients[1]
    c = coefficients[2] if len(coefficients) > 2 else 0
    d = coefficients[3] if len(coefficients) > 3 else 0

    discriminant = b**2 - 4*a*c
    if discriminant < 0:
        return "Complex"
    elif discriminant == 0:
        x = -b / (2 * a)
        return round(x, 2)
    else:
        x1 = (-b + math.sqrt(discriminant)) / (2 * a)
        x2 = (-b - math.sqrt(discriminant)) / (2 * a)
        return f"{round(x1, 2)} or {round(x2, 2)}"


while True:
    try:
        coefficients = [int(x) for x in input("Enter the coefficients (space separated): ").split()]
        
        if len(coefficients) < 3:
            print("Please provide at least three coefficients.")
            continue
        
        print(find_zero(coefficients))
    except ValueError as e:
        print(f"Error: {e}")
        exit()