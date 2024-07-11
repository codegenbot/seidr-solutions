def find_zero():
    xs = list(map(int, input("Enter the coefficients: ").split()))
    if len(xs) % 2 != 1:
        raise ValueError("xs must start with 0")
    if xs[0] != 0:
        raise ValueError("xs must be [0, *coefficients*]")
    x = xs[1]
    y = xs[3:]
    for i in range(len(y)):
        if y[i] == 0 and (i % 2 == 0 or len(y) % 2 != i):
            raise ValueError("xs must be [0, *coefficients*]")
    if sum(y) == 0:
        return None
    if x[1:] != y:
        raise ValueError("xs must be [0, *coefficients*]")
    if len(x) % 2 != 0:
        raise ValueError("xs must be [0, *coefficients*]")
    n = int(sum(x) / (sum(y) or 1))
    return n