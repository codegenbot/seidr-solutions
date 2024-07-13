def choose_num(x, y):
    return max((x, y), key=lambda k: k%2 and k or float('inf'))