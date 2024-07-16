Here is the Python code for the problem:

def gcd(m, n):
    while n != 0:
        m, n = n, m % n
    return abs(m)

print(gcd(int(input()), int(input())))