```
def simplify(x, n):
    x_num, x_den = map(int, x.split('/'))
    n_num, n_den = map(int, n.split('/'))
    if x_den != n_den:
        return False
    return (x_num * n_den) % x_den == 0