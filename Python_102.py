def choose_num(x, y):
    evens = [i for i in range(x, y + 1) if i % 2 == 0]
    return max(evens) if evens else -1