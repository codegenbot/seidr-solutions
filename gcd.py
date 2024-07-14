def gcd(a, b):
    while b:
        g = a % b
        a, b = b, g
    return abs(a)

def find_gcd():
    a = int(input("Enter first integer: "))
    b = int(input("Enter second integer: "))
    print(f"GCD of {a} and {b} is {gcd(a, b)}")

find_gcd()