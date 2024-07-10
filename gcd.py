Here is the solution:

def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

n = int(input())
m = int(input())

print(gcd(n, m))