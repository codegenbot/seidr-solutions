def gcd(a, b):
    if a == b:
        return min(a, b)
    while b != 0:
        a, b = b, a % b
    return abs(a) if a != 1 else 1

a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))

print(f"GCD of {a} and {b} is {gcd(a, b)}")