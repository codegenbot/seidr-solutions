def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[-1]
    return -b / a

xs = list(map(int, input().split()))
print(round(find_zero(xs), 2))