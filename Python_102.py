def choose_num(x, y):
    even_nums = [i for i in range(x, y + 1) if i % 2 == 0]
    return max(even_nums) if even_nums else -1