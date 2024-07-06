```
def simplify(x, n):
    def gcd(a, b):
        while b:
            a, b = b, a % b
        return a
    
    x_num, x_denom = map(int, x.split('/'))
    n_num, n_denom = map(int, n.split('/'))
    
    common_divisor = gcd(x_denom, n_denom)
    
    return (x_num * n_denom) // common_divisor == (n_num * x_denom) // common_divisor