def simplify(x, n):
    x_num, x_denom = map(int, [i for i in x.split('/')])
    n_num, n_denom = map(int, [i for i in n.split('/')])
    
    if (x_num * n_denom) % ((x_denom * n_num)) == 0:
        return True
    else:
        return False