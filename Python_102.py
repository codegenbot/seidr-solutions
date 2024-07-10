def choose_num(x, y):
    if x > y:
        return -1
    max_even = min(y, x + (x % 2))
    for i in range(max_even, x-1, -2):
        if i <= y:
            return i