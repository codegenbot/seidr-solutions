```
def find_zero():
    coefficients = []
    
    while True:
        try:
            coefficient = float(input("Enter a coefficient (or 'done' if finished): "))
            if coefficient == 'done':
                break
            coefficients.append(coefficient)
        except ValueError:
            print("Invalid input. Please enter a number.")
    
    n = len(coefficients)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    x = -coefficients[1] / coefficients[3]
    return round(x, 2)