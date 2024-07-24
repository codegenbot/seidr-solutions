```
def powermod(base: int, exponent: int, modulus: int):
    result = 1
    base = base % modulus
    while exponent > 0:
        if exponent % 2 == 1:
            result = (result * base) % modulus
        exponent = exponent // 2
        base = (base * base) % modulus
    return result

base = int(input("Enter the base: "))
exponent = int(input("Enter the exponent: "))
modulus = int(input("Enter the modulus: "))

print(powermod(base, exponent, modulus))