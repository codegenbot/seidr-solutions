def simplify(x, n):
    x_num, x_den = map(int, x.split("/"))
    n_num, n_den = map(int, n.split("/"))

    result_num = x_num * n_den
    result_den = x_den * n_num

    return result_num == result_den