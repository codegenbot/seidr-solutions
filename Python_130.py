
def tri(n):
    if n == 1:
        return [1]
    elif n % 2 == 0:
        return [1, n // 2]
    else:
        return [1, (n - 1) // 2, n // 2 + 1]