Here is the solution:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

n1 = int(input())
n2 = int(input())

print(gcd(n1,n2))