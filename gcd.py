def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(gcd(a, min(a, b)))


def find_gcd():
    a = int(input("Enter first integer: "))
    b = int(input("Enter second integer: "))
    print(f"GCD of {a} and {b} is {gcd(a, b)}")


find_gcd()