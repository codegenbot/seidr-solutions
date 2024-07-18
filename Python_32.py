def find_zero():
    xs = list(map(int, input().split()))
    n = len(xs) - 1
    return -xs[0] / xs[n]