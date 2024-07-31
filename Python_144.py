def simplify(x, n):
    x_num, x_den = map(int, x.split("/"))
    n_num, n_den = map(int, n.split("/"))

    common_multiple = max(x_num, x_den, n_num, n_den)

    new_x_num = x_num * (common_multiple // x_den)
    new_x_den = common_multiple

    new_n_num = n_num * (common_multiple // n_den)
    new_n_den = common_multiple

    return int(new_x_num / new_x_den) == int(new_n_num / new_n_den)