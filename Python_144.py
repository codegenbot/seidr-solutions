def simplify(x, n):
    x_parts = [int(i) for i in (x.split("/")[1:] + ["0"] if len(x.split("/")) > 2 else x.split("/"))]
    n_parts = [int(i) for i in (n.split("/")[1:] + ["0"] if len(n.split("/")) > 2 else n.split("/"))]

    return x_parts[-1] * n_parts[-1] == x_parts[0] * n_parts[-1]