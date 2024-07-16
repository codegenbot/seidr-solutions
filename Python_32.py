def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("Number of coefficients should be even")

    for i in range(n):
        if xs[i] != 0:
            max_coeff = xs[i]
            break

    return -max_coeff / xs[-1]


# Let's test the function with the given examples
print(round(find_zero([1, 2]), 2))  # Expected output: -0.5
print(round(find_zero([-6, 11, -6, 1]), 2))  # Expected output: 1.0