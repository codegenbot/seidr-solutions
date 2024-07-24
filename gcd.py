Here is the solution for the problem:

def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

# test cases
print(gcd(1, 1))  # output: 1
print(gcd(4, 400000))  # output: 4
print(gcd(54, 24))  # output: 6
print(gcd(4200, 3528))  # output: 168
print(gcd(820000, 63550))  # output: 2050