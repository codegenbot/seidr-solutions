def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    if a == 0 and b == 0: return 1
    elif a > 0 or (a < 0 and b >= 0): return abs(a)
    else: return -abs(a)