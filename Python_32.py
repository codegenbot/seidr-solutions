def find_zero():
    n = int(input())
    xs = list(map(int, input().split()))
    a = xs[-1]
    b = xs[-2] + a
    for i in range(3, n):
        a, b = xs[-i] + a, a + b
    return -a / b