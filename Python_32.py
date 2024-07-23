def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0
    degree = n // 2
    zero = 0.5

    for _ in range(100): 
        new_zero = 0
        for i in range(degree + 1):
            new_coeff = xs[2 * i]
            for j in range(i):
                new_coeff -= (zero ** (i - j)) * xs[2 * j + 1]
            new_zero += (new_coeff / (degree + 1))
        zero = new_zero

    return round(zero, 2)

coeffs = [float(x) for x in input("Enter coefficients: ").split()]

print(find_zero(coeffs))