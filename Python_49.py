def powermod(base, exponent, modulus):
    result = 1
    while exponent > 0:
        if exponent % 2 == 1:
            result = (result * base) % modulus
        exponent //= 2
        base = (base * base) % modulus
    return result

while True:
    try:
        base = int(input("Enter the base: "))
        exponent = int(input("Enter the exponent: "))
        modulus = int(input("Enter the modulus: "))
        
        if base <= 0 or exponent < 0 or modulus <= 0:
            print("Invalid input. Base and modulus should be positive integers, and exponent should be a non-negative integer.")
        else:
            print(powermod(base, exponent, modulus))
    except ValueError:
        print("Invalid input. Please enter integers.")