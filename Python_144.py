```
def simplify(x, n):
    x_num, x_denom = map(int, [i for i in x.split('/')])
    n_num, n_denom = map(int, [i for i in n.split('/')])

    if (x_num * n_denom) % ((x_denom * n_num)) == 0:
        return True
    else:
        common_divisor = max((abs(x_num), x_denom), key=abs).gcd(abs(n_num))
        x_new_num, x_new_denom = x_num // common_divisor, x_denom // common_divisor
        n_new_num, n_new_denom = n_num // common_divisor, n_denom // common_divisor
        return f"{x_new_num}/{x_new_denom}" == f"{n_new_num}/{n_new_denom}"