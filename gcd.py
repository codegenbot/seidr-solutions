def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

print(gcd(832162, 748098))