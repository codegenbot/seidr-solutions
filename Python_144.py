```
def simplify(x, n):
    def gcd(a, b):
        while b:
            a, b = b, a % b
        return a

    x_numerator, x_denominator = map(int, x.split('/'))
    y_numerator, y_denominator = map(int, n.split('/'))

    common_divisor = gcd(x_numerator * y_denominator, x_denominator * y_numerator)
    numerator = x_numerator * y_numerator // common_divisor
    denominator = x_denominator * y_denominator // common_divisor

    return numerator == denominator