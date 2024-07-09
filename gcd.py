def gcd(m, n):
    while math.gcd(m, n) > 1:
        m = math.gcd(m, n)
        n //= m
    return n

# main function
m = int(input())
n = int(input())
print(gcd(m,n))