```
def simplify(x, n):
    x_num, x_denom = map(int, x.split('/'))
    n_num, n_denom = map(int, n.split('/'))
    
    def gcd(a, b):
        while b:
            a, b = b, a % b
        return a
    
    common_divisor = gcd(x_denom, n_denom)
    x_simplified = str(x_num//common_divisor) + '/' + str(x_denom//common_divisor)
    n_simplified = str(n_num//common_divisor) + '/' + str(n_denom//common_divisor)
    
    return eval(x_simplified + '*' + n_simplified) == int(eval(x_simplified + '*' + n_simplified))