def simplify(x, n):
    # Convert x and n to fractions
    x_frac = Fraction(x)
    n_frac = Fraction(n)

    # Simplify the expression
    result = x_frac * n_frac

    # Check if the result is a whole number
    return result.denominator == 1