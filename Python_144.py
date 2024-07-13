```
def simplify(x, n):
    x_num, x_denom = map(int, [int(i) for i in (x.split("/"))[1:]] + ([0] if len((x.split("/"))) == 2 else [(x.split("/"))[-1]])
    n_num, n_denom = map(int, [int(i) for i in (n.split("/"))[1:]] + ([0] if len((n.split("/"))) == 2 else [(n.split("/"))[-1]])

    return x_num * n_denom == n_num * x_denom