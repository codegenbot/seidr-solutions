def find_zero(xs):
    n = len(xs)
    zero = xs[0]
    for i in range(1, n // 2 + 1):
        zero -= xs[i] / ((n - 1) // 2 - i) * zero ** (n - 1 - i)
    return round(zero, 4)


xs = [int(x) for x in input("Enter the coefficients: ").split()]
if len(xs) % 2 != 0:
    raise ValueError("xs must have even number of coefficients")
print(find_zero(xs))