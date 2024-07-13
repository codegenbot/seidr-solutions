def find_zero(coefficients):
    a, b, c = coefficients
    x1 = (-b + (b**2 - 4*a*c)**0.5) / (2*a)
    x2 = (-b - (b**2 - 4*a*c)**0.5) / (2*a)
    return f"The zero points are {x1:.2f} and {x2:.2f}."

while True:
    while True:
        user_input = input("Enter the coefficients (space separated): ")
        
        try:
            coefficients = [int(x) for x in user_input.split()]
            
            if len(coefficients) != 3: 
                print("Please provide exactly three coefficients.")
            elif any(c % 2 != 0 for c in coefficients):
                print("Please provide exactly three even-numbered coefficients.")
            else:
                break
        
        except ValueError as e:
            print(f"Error: {e}")

    zero_point = find_zero(coefficients)
    print(zero_point)