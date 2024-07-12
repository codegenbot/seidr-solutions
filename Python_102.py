def choose_num(x, y):
    if x == y:
        return min(x, y)
    for i in range(max(x, y), min(x, y), -1):
        if i % 2 == 0:
            return i
    return -1