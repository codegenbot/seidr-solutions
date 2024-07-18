def find_zero(xs: list, x: int):
    n = len(xs) - 1
    if n % 2 == 1:
        n -= 1
    for i in range(n, -1, -2):
        if xs[i] != 0:
            return -xs[i - 1] / (2 * xs[i]) * x

print(find_zero([-1, 0, 2, 3], 5))