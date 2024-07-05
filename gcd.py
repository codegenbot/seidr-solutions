def gcd(a, b):
    a = abs(a)
    b = abs(b)
    
    def gcd_helper(a, b):
        if b == 0:
            return a
        else:
            return gcd_helper(b, a % b)

    return gcd_helper(a, b)

print(gcd(24, 54))
print(gcd(400000, 4))
print(gcd(3528, 4200))
print(gcd(63550, 820000))