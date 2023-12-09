def tri(n):
    if n == 1:
        return [3]
    elif n % 2 == 0:
        return [1 + n // 2]
    else:
        return [tri(n - 1) + tri(n - 2) + tri(n + 1)]