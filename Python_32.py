```
def find_zero():
    xs = list(map(int, input("Enter the coefficients: ").split()))
    if len(xs) % 2 != 1:
        return "Error: xs must start with 0"
    if xs[0] != 0:
        return "Error: xs must be [0, *coefficients*]"
    x = xs[1]
    y = xs[3:]
    for i in range(len(y)):
        if y[i] == 0 and (i % 2 == 0 or len(y) % 2 != i):
            return "Error: xs must be [0, *coefficients*]"
    if sum(y) == 0:
        return None
    if x[1:] != y:
        return None
    if len(x) % 2 != 0:
        return None
    n = int(sum(x) / (sum(y) or 1))
    return n