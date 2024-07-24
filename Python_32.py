def find_zero():
    coefficient = []
    while True:
        try:
            value = float(input("Enter a coefficient (or 'q' to quit): "))
            if value == 'q':
                break
            coefficient.append(value)
        except ValueError:
            print("Invalid input. Please enter a number.")
    n = len(coefficient)
    if n % 2 != 0:
        raise ValueError("The polynomial must have an even degree.")
    a = coefficient[0]
    b = coefficient[1]
    c = coefficient[2] if n > 2 else 0
    d = coefficient[3] if n > 3 else 0
    x = (-b + math.sqrt(b**2 - 4*a*c)) / (2*a)
    return round(x, 2)