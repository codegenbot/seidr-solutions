def simplify(x, n):
    x_num, x_denom = map(int, [i for i in x.split('/') if i])
    n_num, n_denom = map(int, [i for i in n.split('/') if i])

    return (x_num / x_denom) == (n_num / n_denom)