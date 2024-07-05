def simplify(x, n):
    def to_fraction(f):
        num, denom = map(int, f.split("/"))
        return num, denom

    num_x, denom_x = to_fraction(x)
    num_n, denom_n = to_fraction(n)

    result_num = num_x * num_n
    result_denom = denom_x * denom_n

    return result_num % result_denom == 0