
def tri(n):
    if n == 0:
        return [1]
    elif n % 2 == 0:
        return [1, 3]
    else:
        return [1, 3, 2] + tri(n - 1)