```
def simplify(x, n):
    x_num = 1 if len(x.split("/")) == 1 else int(x.split("/")[-1])
    x_denom = int(1) if len(x.split("/")) == 1 else int(x.split("/")[0].split(" ")[-1])

    n_num = 1 if len(n.split("/")) == 1 else int(n.split("/")[-1])
    n_denom = int(1) if len(n.split("/")) == 1 else int(n.split("/")[0].split(" ")[-1])

    return x_num * n_denom == n_num * x_denom