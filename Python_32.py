def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[n]
    return -a / b


xs = list(map(float, input().split()))
result = find_zero(xs)
print(result)