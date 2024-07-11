def choose_num(x, y):
    if x > y:
        x, y = y, x
    for i in range(x, y + 1):
        if i % 2 == 0 and i != x:
            return i
    return -1