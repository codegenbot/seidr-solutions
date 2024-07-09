def find_zero(xs):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    for i in range(1, n-1):
        if xs[i-1] * xs[n-1] - xs[i] * xs[i+1] == 0:
            return round(-xs[n-1]/xs[i],2)
    raise ValueError("The polynomial doesn't have a zero within the given coefficients")