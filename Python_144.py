def simplify(x, n):
    a, b = map(int, x.split("/"))
    c, d = map(int, n.split("/"))
    gcd_val = gcd(gcd(a, b), gcd(c, d))
    return (a//gcd_val, b//gcd_val) == (c//gcd_val, d//gcd_val)

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a