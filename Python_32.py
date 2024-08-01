def find_zero(xs: list):
    n = xs[-2]
    a = xs[-1]
    return -n / a

xs = list(map(int, input().split()))
result = find_zero(xs)
print(result)