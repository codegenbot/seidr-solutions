def simplify(x, n):
    x_num, x_denom = map(int, x.split("/"))
    n_num, n_denom = map(int, n.split("/"))

    product_num = x_num * n_num
    product_denom = x_denom * n_denom

    return product_num == product_denom