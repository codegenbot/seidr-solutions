def simplify(x, n):
    x_num, x_denom = map(int, [i for i in x.split("/")])
    n_num, n_denom = map(int, [i for i in n.split("/")])

    if str(x_num / x_denom) == str(n_num / n_denom):
        return False
    else:
        gcd = lambda a, b: a if not b else gcd(b, a % b)
        common_divisor = gcd(x_denom, n_denom)

        return str(x_num // common_divisor) + "/" + str(x_denom // common_divisor), str(
            n_num // common_divisor
        ) + "/" + str(n_denom // common_divisor)