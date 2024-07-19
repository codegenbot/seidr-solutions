def find_zero(xs: list):
    n = len(xs) // 2 + 1
    for i in range(n):
        if xs[i] != 0:
            return -i / xs[i]
    return None