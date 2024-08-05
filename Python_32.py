def find_zero():
    xs = list(map(int, input().strip().split()))
    n = len(xs)
    a = xs[-1]
    b = xs[-2] + a
    for i in range(3, n):
        a, b = xs[-i] + a, a + b
    return -a / b