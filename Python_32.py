```
def find_zero(xs):
    xs = list(map(int, input("Enter a list of numbers separated by space: ").split()))
    n = len(xs)
    assert n % 2 == 0
    degree = n // 2
    coefficients = [0] * (degree + 1)
    for i in range(degree + 1):
        if i < len(xs):
            coefficients[i] = xs[i]
    root = coefficients[0]
    return round(root, 2)