```
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