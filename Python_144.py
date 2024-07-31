```
def simplify(x, n):
    x_num, x_denom = map(int, x.split('/'))
    n_num, n_denom = map(int, n.split('/'))
    
    common_divisor = min(x_denom, n_denom)
    
    while common_divisor > 0:
        if x_num % common_divisor == 0 and n_num % common_divisor == 0:
            x_num //= common_divisor
            n_num //= common_divisor
        else:
            break
        
        common_divisor = min(x_denom, n_denom)
    
    return x_num * n_num == x_denom * n_denom