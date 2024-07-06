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

    if (x_num // common) / (n_denom // common) == (n_num // common) / (
        x_denom // common
    ):
        return "The fractions are equal."
    else:
        return f"The fractions {x} and {n} are not equal."