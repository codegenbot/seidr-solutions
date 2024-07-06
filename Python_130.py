
def tri(n):
    if n == 1:
        return [1]
    elif n % 2 == 0:
        return [1, int(n / 2)]
    else:
        return [1, tri(n - 1)[-1], tri(n - 2)[-1], tri(n + 1)[-1]]