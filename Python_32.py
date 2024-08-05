def find_zero():
    xs = list(map(int, input().split()))
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2] + a
    for i in range(3, n + 1):
        a, b = xs[-i] + a, a + b
    return -a / b 