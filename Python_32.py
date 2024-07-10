def find_zero(xs):
    n = len(xs) // 2
    y = xs[-1]
    for p in range(len(xs) - 1, -1, -1):
        y = (xs[p] * y + (-1) * (10**9)) % (10**9)
    return str(y)


xs = [int(x) for x in input("Enter the coefficients: ").split()]
if len(xs) % 2 != 0:
    raise ValueError("xs must have even number of coefficients")
print(find_zero(xs))