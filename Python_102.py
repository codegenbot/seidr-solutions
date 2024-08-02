def choose_num(x, y):
    if x > y:
        return -1
    max_even = -1
    for i in range(x, y + 1):
        if i % 2 == 0 and i > max_even:
            max_even = i
    return max_even