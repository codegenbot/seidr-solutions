def modp(x, y):
    result = 1
    while y > 0:
        if y % 2 == 1:
            result = (result * x) % (y + 1)
        x = (x * x) % (y + 1)
        y = y // 2
    return result