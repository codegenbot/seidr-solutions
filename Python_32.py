def find_zero(xs: list):
    n = len(xs) - 1
    return -xs[0] / xs[n]

xs = list(map(int, input().split()))

result = find_zero(xs)

print(result)