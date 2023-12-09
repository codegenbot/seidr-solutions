def simplify(x, n):
    x_num, x_denom = map(int, x.split("/"))
    n_num, n_denom = map(int, n.split("/"))
    result = x_num * n_num
    if result % (x_denom * n_denom) == 0:
        return True
    else:
        return False