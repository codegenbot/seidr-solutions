Here is the solution:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

# Read input from user
a = int(input())
b = int(input())

print(gcd(a, b))