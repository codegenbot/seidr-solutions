```
def simplify(x, n):
    def gcd(a, b):
        while b:
            a, b = b, a % b
        return a

    x_num, x_den = map(int, x.split('/'))
    n_num, n_den = map(int, n.split('/'))

    g = gcd(x_den, n_den)
    return (x_num * n_den) // g == (n_num * x_den) // g