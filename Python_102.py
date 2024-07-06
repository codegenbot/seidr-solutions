def choose_num(x, y):
    if x % 2 == 0:
        return min(y, max(x, x + (y - x) // 2 * 2))
    else:
        return -1