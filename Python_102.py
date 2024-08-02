def choose_num(x, y):
    return max([i for i in range(x, y+1) if i % 2 == 0] or [-1])