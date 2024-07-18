def x_or_y(n, x, y):
    return x if all(n % i != 0 for i in range(2, int(n**0.5) + 1)) else y