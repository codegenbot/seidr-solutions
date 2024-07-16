def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = sum(
        [
            (-1) ** i
            * coeff
            * math.factorial(n)
            / (math.factorial(i) * math.factorial(n - i))
            for i, coeff in enumerate(xs)
        ]
    )
    return -b / a