```
def simplify(x, n):
    x_denominator, x_numerator = map(int, x.split('/'))
    n_denominator, n_numerator = map(int, n.split('/'))

    product_numerator = x_numerator * n_numerator
    product_denominator = x_denominator * n_denominator

    return product_numerator == product_denominator