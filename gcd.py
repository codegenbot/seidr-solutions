def gcd(a, b):
    if a == 0 and b == 0:
        return 'Not defined'
    elif a < 0 or b < 0:
        if a < 0:
            a = -a
        if b < 0:
            b = -b
    else:
        while b != 0:
            a, b = b, a % b
    return abs(a)

print(gcd(24, 54))
print(gcd(400000, 4))
print(gcd(3528, 4200))
print(gcd(63550, 820000))