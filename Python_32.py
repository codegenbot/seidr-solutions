def find_zero(xs: list):
    # Check if the number of coefficients is even and largest non-zero coefficient is positive
    if len(xs) % 2 == 0 and xs[-1] > 0:
        # Initialize lower and upper bounds for bisection method
        a = -1
        b = 1
        # Loop until the solution is found with specified tolerance
        while abs(b - a) >= 1e-6:
            # Calculate the midpoint of the current interval
            c = (a + b) / 2
            # Evaluate the polynomial at the midpoint
            y = poly(xs, c)
            # Check if the midpoint is a solution or update the bounds accordingly
            if abs(y) <= 1e-6:
                return c
            elif y > 0:
                b = c
            else:
                a = c
    # If no solution is found, return None
    return None