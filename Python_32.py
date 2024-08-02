def find_zero(xs: list):
    xs = list(map(int, input().split()))
    n = len(xs) - 1
    a = xs[0]
    b = xs[1]
    if n == 1:
        return -a / b
    return -a / b