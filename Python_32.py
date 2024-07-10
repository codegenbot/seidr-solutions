def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("Number of coefficients must be even")

    leading_coeff = max(xs, key=abs)
    if leading_coeff == 0:
        raise ValueError("Largest non-zero coefficient must be non-zero")

    if len(xs) == 2:
        return -xs[0] / xs[1]

    for i in range(1, len(xs)):
        if xs[i] == 0:
            continue
        return -xs[0] / xs[i]


coefficients = list(map(float, input().split()))
print(find_zero(coefficients))