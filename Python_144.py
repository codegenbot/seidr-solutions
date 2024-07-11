def simplify(x, n):
    x_num, x_denom = map(int, x.split("/"))
    n_num, n_denom = map(int, n.split("/"))

    simplified_num = x_num * n_denom
    simplified_denom = x_denom * n_num

    return simplified_num == simplified_denom