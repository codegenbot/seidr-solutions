def tri(n):
    if n == 1:
        return [1, 3]
    elif n % 2 == 0:
        return [n, n + 1]
    else:
        return [tri(n - 1)[-1], tri(n - 2)[-1], tri(n + 1)[-1]]