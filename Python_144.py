def simplify(x, n):
    num1, denom1 = map(int, x.split('/'))
    num2, denom2 = map(int, n.split('/'))
    result = num1 * num2 / (denom1 * denom2)
    return result.is_integer()