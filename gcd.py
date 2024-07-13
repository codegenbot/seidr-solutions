```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))

print(gcd(a, b))