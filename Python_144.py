def simplify(x, n):
    x_num, x_denom = map(int, [i for i in x.split("/") if i])
    n_num, n_denom = map(int, [i for i in n.split("/") if i])

    greatest_common_divisor = lambda a, b: (
        a if not b else greatest_common_divisor(b, a % b)
    )

    return greatest_common_divisor(x_denom, n_denom) == 1