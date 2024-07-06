
def find_zero(xs: list):
    # Check if the number of coefficients is even and the largest coefficient is non-zero
    if len(xs) % 2 == 0 and xs[-1] != 0:
        # Initialize the lower and upper bounds of the search interval
        a = -1
        b = 1

        while True:
            # Calculate the midpoint of the current search interval
            c = (a + b) / 2

            # Evaluate the polynomial at the midpoint
            y = poly(xs, c)

            # Check if the midpoint is a zero point
            if y == 0:
                return c

            # Update the search interval based on the sign of the evaluation result
            if y > 0:
                b = c
            else:
                a = c
    else:
        raise ValueError("Invalid input")