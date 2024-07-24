def simplify(x, n):
    x_num, x_denom = map(int, x.split('/'))
    n_num, n_denom = map(int, n.split('/'))
    
    common_divisor = min(x_denom, n_denom)
    
    while common_divisor > 0:
        if (x_num * n_num) % common_divisor == 0 and (x_denom * n_denom) % common_divisor == 0:
            return False
        common_divisor -= 1
    
    simplified_x_num = x_num // common_divisor
    simplified_x_denom = x_denom // common_divisor
    simplified_n_num = n_num // common_divisor
    simplified_n_denom = n_denom // common_divisor

    if simplified_x_num == simplified_n_num and simplified_x_denom == simplified_n_denom:
        return False
    else:
        return f"{simplified_x_num}/{simplified_x_denom}"