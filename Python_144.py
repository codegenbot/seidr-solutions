```
def simplify(x, n):
    x_num, x_denom = map(int, x.split('/'))
    n_num, n_denom = map(int, n.split('/'))
    
    if x_denom * n_denom == (x_num * n_num):
        return True
    else:
        return False