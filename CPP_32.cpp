[PYTHON]
def find_zero(coeffs: list) -> float:
    """
    Finds a zero of the polynomial defined by the coefficients in coeffs.
    The function returns only one zero point, even if there are many.
    Moreover, the function only takes a list of coefficients with an even number of elements and the largest non-zero coefficient as it guarantees a solution.
    """
    # Initialize x to 0
    x = 0

    # Loop through the coefficients and calculate the polynomial value at x
    for i in range(len(coeffs)):
        x += coeffs[i] * (x ** i)

    return x
[/PYTHON]
[TESTS]
# Test case 1:
assert find_zero([1, -2, 1]) == 1
# Test case 2:
assert find_zero([-1, 0, 1]) == 1
# Test case 3:
assert find_zero([1, 2, 3, 4]) == 1
# Test case 4:
assert find_zero([1, 2, 3, 4, 5]) == 1
# Test case 5:
assert find_zero([1, 2, 3, 4, 5, 6]) == 1
[/TESTS]
