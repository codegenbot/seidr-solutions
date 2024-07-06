```
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

    if float(new_x_num)/common /float(new_denom) == float(new_n_num)/common /float(new_x_denom):
        return f"The fractions {x} and {n} are equal."
    else:
        return f"The fractions {x} and {n} are not equal."