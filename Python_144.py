def simplify(x, n):
    x_num, x_den = map(int, x.split("/"))
    n_num, n_den = map(int, n.split("/"))

    product_num = x_num * n_num
    product_den = x_den * n_den

    return product_num == product_den