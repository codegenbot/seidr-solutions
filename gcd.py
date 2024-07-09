def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))
print(gcd(a, b))