def simplify(x, n):
    x_num, x_denom = map(int, x.split("/"))
    n_num, n_denom = map(int, n.split("/"))

    def gcd(a, b):
        while b:
            a, b = b, a % b
        return a

    common = gcd(x_denom, n_denom)
    new_x_num = x_num // common
    new_n_num = n_num // common

    simplified_x = str(new_x_num) + "/" + str(common)
    simplified_n = str(new_n_num) + "/" + str(common)

    if new_x_num * n_denom == new_n_num * x_denom:
        return True, (simplified_x, simplified_n)
    else:
        return False, (x, n)