```
def powermod(base: int, exponent: int, modulus: int):
    result = 1
    while exponent > 0:
        if exponent % 2 == 1:
            result = (result * base) % modulus
        exponent = exponent // 2
        if exponent > 0:
            base = (base * base) % modulus
    return result

while True:
    try:
        base = int(input("Enter the base: "))
        exponent = int(input("Enter the exponent: "))
        modulus = int(input("Enter the modulus: "))
        print(powermod(base, exponent, modulus))
    except ValueError:
        print("Invalid input. Please enter integers.")