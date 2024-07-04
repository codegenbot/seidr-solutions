def poly(coeffs, x):
    return sum(coeff * x**i for i, coeff in enumerate(coeffs))

def find_zero(xs: list):
    def f(x):
        return poly(xs, x)

    a, b = -1000, 1000
    while b - a > 1e-7:
        mid = (a + b) / 2
        if f(mid) == 0:
            return mid
        elif f(a) * f(mid) < 0:
            b = mid
        else:
            a = mid
    return (a + b) / 2

# Read input from user
xs = list(map(float, input("Enter polynomial coefficients (space separated): ").split()))
result = find_zero(xs)
print(f"The root is approximately: {result}")