def gcd(m, n):
    while n != 0:
        m, n = n, m % n
    return abs(m)

# Test cases
print(gcd(1, 1))  # Output: 1
print(gcd(4, 400000))  # Output: 4
print(gcd(54, 24))   # Output: 6
print(gcd(4200, 3528))   # Output: 168
print(gcd(820000, 63550))  # Output: 2050