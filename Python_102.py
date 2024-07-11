def choose_num(x, y):
    if x > y:
        return -1
    for i in range(x, y+1):
        if i % 2 == 0 and i >= x:
            return i