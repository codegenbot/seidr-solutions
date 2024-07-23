```
def gcd(a, b):
    while(b):
        a, b = b, a % b
    return abs(a)

def scm(a, b):
    gcd_value = gcd(abs(a), abs(b))
    return (a // gcd_value) * (b // gcd_value) * gcd_value

print(scm(582329, 833565))