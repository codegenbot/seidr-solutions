```
def simplify(x, n):
    x_num, x_denom = map(int, x.split('/'))
    n_num, n_denom = map(int, n.split('/'))

    def gcd(a, b):
        while b:
            a, b = b, a % b
        return a
    
    common = gcd(x_denom, n_denom)
    
    simplified_x = str(x_num // common) + '/' + str(x_denom // common)
    simplified_n = str(n_num // common) + '/' + str(n_denom // common)
    
    if x_num // common == 0:
        return "0/1" if x_denom // common == 1 else "0/" + str(x_denom // common)
    elif n_num // common == 0:
        return "0/1"
    else:
        return simplified_x + ' / ' + simplified_n if simplified_x != simplified_n else simplified_x