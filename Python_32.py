def find_zero(xs: list):
    n = len(xs) - 1
    for i in range(n, 0, -2):
        if xs[i] != 0:
            return -xs[i - 1] / xs[i]


xs = list(map(int, input().split()))
result = find_zero(xs)
print(result)