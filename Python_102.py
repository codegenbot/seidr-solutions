def choose_num(x, y):
    if x % 2 == 0:
        return max(x, y)
    elif y % 2 == 0:
        return y
    else:
        return -1