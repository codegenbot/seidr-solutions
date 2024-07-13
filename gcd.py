def gcd(a, b):
    a = abs(a)
    b = abs(b)
    while b != 0:
        a, b = b, a % b
    if a == 1:
        return 1
    else:
        return abs(a)

def find_gcd():
    a = int(input("Enter first integer: "))
    b = int(input("Enter second integer: "))
    print(f"GCD of {a} and {b} is {gcd(a, b)}")

find_gcd()