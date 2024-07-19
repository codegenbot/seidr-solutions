def choose_num(x, y):
    for num in range(y, x - 1, -1):
        if num % 2 == 0:
            return num
    return -1