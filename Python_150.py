def x_or_y(n, x, y):
    if n > 1:
        for i in range(2, n):
            if (n % i) == 0:
                return y
    return x