```
def simplify(x, n):
    x_numerator, x_denominator = map(int, x.split('/'))
    y_numerator, y_denominator = map(int, n.split('/'))

    numerator = x_numerator * y_denominator
    denominator = x_denominator * y_numerator

    if numerator % denominator != 0:
        return False
    else:
        return True