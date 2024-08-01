def find_zero(xs: list):
    xs = list(map(int, input().split()))
    n = len(xs) - 1
    a, b = xs[-1], xs[-2]
    return -a / b