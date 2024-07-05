def simplify(x, n):
    def to_fraction(frac):
        num, denom = map(int, frac.split("/"))
        return num, denom

    x_num, x_denom = to_fraction(x)
    n_num, n_denom = to_fraction(n)

    result_num = x_num * n_num
    result_denom = x_denom * n_denom

    return result_num % result_denom == 0