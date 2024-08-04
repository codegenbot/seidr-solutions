Here is the Python solution for the problem:

def gcd(m, n):
    while n != 0:
        m, n = n, m % n
    return abs(m)

text = int(input())
target = int(input())

print(gcd(text, target))