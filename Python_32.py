def find_zero(xs: list):
    n = len(xs) - 1
    return -xs[n - 1] / xs[n]

xs = list(map(int, input().split()))
result = find_zero(xs)
print(result)