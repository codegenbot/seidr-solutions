```
def find_zero(xs):
    if len(xs) != 2:
        return "Error: Please provide exactly two numbers"
    x1 = xs[0]
    x2 = xs[1]
    n = (x1 + x2) // 2
    return -n / x2