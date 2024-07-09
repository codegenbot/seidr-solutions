def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0, "Number of coefficients must be even"
    assert xs[-1] != 0, "Largest coefficient must be non-zero"
    a = xs[0]
    b = xs[1]
    c = xs[-1]
    return (-b + (b**2 - 4*a*c)**0.5) / (2*a)

coefficients = list(map(int, input().split()))
result = find_zero(coefficients)
print(result)