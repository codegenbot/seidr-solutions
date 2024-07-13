def simplify(x, n):
    x_num, x_denom = map(int, x.split("/"))
    n_num, n_denom = map(int, n.split("/"))

    if x_num * n_denom == n_num * x_denom:
        return (
            f"{x_num // math.gcd(x_num, x_denom)}/{x_denom // math.gcd(x_num, x_denom)}"
        )
    else:
        return f"{x_num}/{x_denom}"