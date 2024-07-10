def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    if xs[0] == 0:
        return -xs[n-1] / sum(x for x in xs[1:-1])
    else:
        zero = (0.0, xs[0])
        for i in range(1, n):
            zero = ((zero[0]*xs[i]+zero[1]), xs[i+1])
        return -zero[0] / zero[1]