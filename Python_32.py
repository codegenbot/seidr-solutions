def find_zero(xs):
    n = len(xs)
    a = xs[n - 1]
    b = xs[n - 2]
    return -b / a

xs = list(map(float, input().split()))
result = find_zero(xs)
print(result)