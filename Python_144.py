def simplify(x, n):
    x_numerator, x_denominator = map(int, x.split('/'))
    n_numerator, n_denominator = map(int, n.split('/'))
    
    result = x_numerator * n_numerator / (x_denominator * n_denominator)
    return result.is_integer()