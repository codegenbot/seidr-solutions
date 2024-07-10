Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("List of coefficients must have even number of elements")
    leading_coeff = xs[0]
    for i in range(1, n//2 + 1):
        if abs(leading_coeff) < abs(xs[i]):
            leading_coeff = xs[i]
    x = -leading_coeff / xs[n-1]  # last coefficient is the leading one
    return round(x, 2)