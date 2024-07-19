Here is the solution:

def gcd(m, n):
    while n != 0:
        m, n = n, m % n
    return abs(m)

n = int(input())
m = int(input())
print(gcd(n,m))