def choose_num(x, y):
    if x % 2 == 0 and x <= y:
        return x
    elif y % 2 == 0 and x < y:
        return y
    else:
        return -1