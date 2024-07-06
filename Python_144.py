```
def simplify(x, n):
    x_num, x_denom = map(int, x.split('/'))
    n_num, n_denom = map(int, n.split('/'))
    
    common_divisor = min(x_denom, n_denom)
    while common_divisor > 1 and x_denom % common_divisor == 0 and n_denom % common_divisor == 0:
        x_denom //= common_divisor
        n_denom //= common_divisor
    
    if x_num * n_num != x_denom * n_denom:
        return False
    else:
        return True