def gcd(a, b):
    if a == 0 or b == 0:
        return max(a, b)
    while b:
        a, b = b, a % b
    return a if a != 0 else 1

result = gcd(854764, 549281)
print(result)