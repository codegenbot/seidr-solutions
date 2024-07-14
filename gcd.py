def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))

print(f"GCD of {a} and {b} is {gcd(max(a, b), min(a, b))}")