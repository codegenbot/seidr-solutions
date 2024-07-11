```
def simplify(x, n):
    def gcd(a, b):
        while b:
            a, b = b, a % b
        return a
    x1, x2 = map(int, x.split('/'))
    y1, y2 = map(int, n.split('/'))
    g = gcd(x2, y2)
    return (x1*y1)//g == x2//g