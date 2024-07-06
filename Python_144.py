```
def simplify(x, n):
    x_numerator, x_denominator = map(int, x.split('/'))
    y_numerator, y_denominator = map(int, n.split('/'))
    
    result_numerator = x_numerator * y_numerator
    result_denominator = x_denominator * y_denominator
    
    if result_denominator % 2 == 0:
        return False
    else:
        return True