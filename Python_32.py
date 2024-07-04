def poly(coeffs, x):
    return sum(c * x**i for i, c in enumerate(coeffs))

def find_zero(xs: list):
    def f(x):
        return poly(xs, x)

    a, b = -1000, 1000
    while b - a > 1e-7:
        mid = (a + b) / 2
        if abs(f(mid)) < 1e-7:
            return mid
        elif f(a) * f(mid) < 0:
            b = mid
        else:
            a = mid
    return (a + b) / 2

degree = int(input().strip())
coefficients = [float(input().strip()) for _ in range(degree + 1)]

zero = find_zero(coefficients)
print(f"The zero of the polynomial is approximately: {zero}")