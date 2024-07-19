```
def simplify(x, n):
    x_num, x_denom = map(int, x.split('/'))
    n_num, n_denom = map(int, n.split('/'))
    
    if x_denom * n_denom == 0:
        return False
    
    common_divisor = min(x_denom, n_denom)
    
    while common_divisor > 1 and (x_num % common_divisor != 0 or n_num % common_divisor != 0):
        common_divisor -= 1
    
    if x_denom // common_divisor == n_denom // common_divisor:
        return True
    else:
        return False