```
def find_zero():
    coefficients = []
    while True:
        try:
            coeff = float(input("Enter coefficient (or 'q' to quit): "))
            if coeff == 'q':
                break
            coefficients.append(coeff)
        except ValueError:
            print("Invalid input. Please enter a number.")
    
    if len(coefficients) % 2 != 0:
        raise ValueError("Coefficients must have even number of values")
    n = len(coefficients)
    a = coefficients[n//2]
    b = -sum([coeff for i, coeff in enumerate(coefficients[:n//2]) if i % 2 == 1])
    c = sum([coeff for i, coeff in enumerate(coefficients[:n//2]) if i % 2 == 0])
    d = -a
    x = (-b + math.sqrt(b**2-4*a*c)) / (2*a)
    return round(x, 2)