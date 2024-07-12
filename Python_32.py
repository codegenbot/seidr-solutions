def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("Number of coefficients should be even.")

    for i in range(n, -1, -1):
        if xs[i] != 0:
            return -xs[0] / xs[i]


# Test cases
print(round(find_zero([1, 2]), 2))  # f(x) = 1 + 2x
print(
    round(find_zero([-6, 11, -6, 1]), 2)
)  # (x - 1) * (x - 2) * (x - 3) = -6 + 11x - 6x^2 + x^3