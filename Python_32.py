def find_zero(xs: list):
    n = len(xs) // 2
    a, b = xs[n], max(xs[:n] + xs[n + 1:])
    return -a / b

xs = list(map(int, input().split()))
print(find_zero(xs))