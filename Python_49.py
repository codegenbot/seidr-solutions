```
def powermod(base, exponent, modulus):
    result = 1
    while exponent > 0:
        if exponent % 2 == 1:
            result = (result * base) % modulus
        base = (base * base) % modulus
        exponent = exponent // 2
    return result

while True:
    try:
        while True:
            base = int(input("Enter the base: "))
            if base < 0:
                print("Invalid input. Base should be positive.")
                continue
            exponent = int(input("Enter the exponent: "))
            modulus = int(input("Enter the modulus: "))
            if modulus <= 0:
                print("Invalid input. Modulus should be a positive integer.")
                continue
            print(powermod(base, exponent, modulus))
            break
    except ValueError:
        print("Invalid input. Please enter integers.")