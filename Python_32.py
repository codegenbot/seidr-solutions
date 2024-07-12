def find_zero(xs: list):
    n = len(xs) // 2
    a, b = 1, -1
    for i in range(n):
        a *= xs[2 * i]
        b *= -xs[2 * i + 1]
    return b / a


xs = list(map(int, input().split()))
result = find_zero(xs)
print(result)