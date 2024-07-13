def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


a = int(input("Enter first number: "))
b = int(input("Enter second number: "))

print(gcd(a, b))