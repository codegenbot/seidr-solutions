Here is the solution:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

n = int(input())
m = int(input())

print(gcd(n, m))