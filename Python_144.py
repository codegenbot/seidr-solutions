def simplify(x, n):
    x_num, x_denom = map(int, x.split("/"))
    n_num, n_denom = map(int, n.split("/"))

    result_num = x_num * n_denom
    result_denom = x_denom * n_num

    return result_num == result_denom