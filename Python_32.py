def find_zero():
    xs = list(map(int, input().split()))
    x1 = xs[0]
    x2 = xs[1]
    n = (x1 + x2) // 2
    return -n / x2