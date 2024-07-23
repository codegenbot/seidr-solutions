````
def gcd(a, b):
    a = abs(a)
    b = abs(b)
    if a == 0: 
        return b
    elif b == 0:
        return a
    while b != 0: 
        a, b = b, a % b
    return a

def scm(a, b):
    def gcd_two_numbers(x, y):
        while(y):
            x, y = y, x % y
        return abs(x)
    
    return (a * b) // gcd_two_numbers(a, b)

print(scm(12, 15))
```