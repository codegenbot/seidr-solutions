def poly(xs, x):
    return sum(coef * (x ** i) for i, coef in enumerate(xs))

def find_zero(xs: list):
    def f(x):
        return poly(xs, x)

    def df(x):
        h = 1e-5
        return (f(x + h) - f(x)) / h

    x = 0  # initial guess
    for _ in range(100):  # maximum iterations
        x = x - f(x) / df(x)
    return x

coefficients = [float(x) for x in input().split()]
print(find_zero(coefficients))