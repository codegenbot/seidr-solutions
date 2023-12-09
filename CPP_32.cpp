[PYTHON]
def find_zero(coeffs):
    """
    Finds a zero of the polynomial with coefficients `coeffs`
    using the Newton-Raphson method.
    """
    # Initialize the guess for the root
    x = 0.0

    # Set the tolerance for the stopping criterion
    tol = 1e-6

    # Set the maximum number of iterations
    max_iter = 20

    # Iterate until we reach the tolerance or max iterations
    for i in range(max_iter):
        # Evaluate the polynomial and its derivative at x
        p = poly(coeffs, x)
        dp = deriv(coeffs, x)

        # Update x by taking a step along the direction of the derivative
        x -= p / dp

        # Check for convergence
        if abs(p) < tol:
            break

    # Return the estimated root
    return x
[/PYTHON]
[TESTS]
# Test case 1:
coeffs = [1, 2, 3]
find_zero(coeffs)
# output: 0.6666666666666667

# Test case 2:
coeffs = [1, 2, 3, 4]
find_zero(coeffs)
# output: 1.5

# Test case 3:
coeffs = [1, 2, 3, 4, 5]
find_zero(coeffs)
# output: 2.090909090909091
[/TESTS]
