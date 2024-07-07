Here is the solution to the problem:

def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

text = int(input())
target = int(input())

print(gcd(text, target))