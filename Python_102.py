def choose_num(x, y):
    if x % 2 == 0 and y % 2 == 0:
        return max(range(x, y+1, 2))
    else:
        return -1