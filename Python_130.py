
def tri(n):
    if n == 1:
        return [1]
    elif n % 2 == 0:
        return [1, 3] + [1 + i / 2 for i in range(2, n + 1)]
    else:
        return [1, 3] + [tri(i - 1) + tri(i - 2) + tri(i + 1) for i in range(2, n + 1)]