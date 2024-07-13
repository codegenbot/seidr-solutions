```
def find_zero(coefficients):
    a = coefficients[0]
    b = coefficients[1]
    c = coefficients[2]

    zero = (-b + (b**2 - 4*a*c)**(1/2)) / (2*a)
    
    return round(zero, 2)

while True:
    try:
        coefficients = [int(x) for x in input("Enter the coefficients (space separated): ").split()]
        
        if len(coefficients) < 3 or any(len(str(c)) % 2 != 0 for c in coefficients[:3]):
            print("Please provide at least three even-numbered coefficients.")
            continue
        
        print(find_zero(coefficients))
    except ValueError as e:
        print(f"Error: {e}")
        exit()