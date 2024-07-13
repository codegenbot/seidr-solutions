```
while True:
    try:
        coeffs = [int(x) for x in input("Enter the coefficients (space separated): ").split()]
        if len(coeffs) % 2 != 0:
            raise ValueError("xs must have even number of coefficients")
        print(find_zero(coeffs))
    except ValueError as e:
        print(f"Error: {e}")