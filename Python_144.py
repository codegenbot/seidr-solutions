def simplify(x, n):
    x = x.split('/')
    n = n.split('/')
    numerator_x = int(x[0])
    denominator_x = int(x[1])
    numerator_n = int(n[0])
    denominator_n = int(n[1])
    result = numerator_x * numerator_n / (denominator_x * denominator_n)
    return result.is_integer()