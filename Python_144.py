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
    new_x_denom = x_denom // common 
    new_n_num = n_num // common
    new_n_denom = n_denom // common 

    fraction_x = new_x_num / new_x_denom
    fraction_n = new_n_num / new_n_denom
    return x_num != n_num or x_denom != n_denom