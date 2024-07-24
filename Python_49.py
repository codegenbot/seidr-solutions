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

while True:
    try:
        base = int(input("Enter the base: "))
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")

while True:
    try:
        exponent = int(input("Enter the exponent: "))
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")

while True:
    try:
        modulus = int(input("Enter the modulus: "))
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")

print(powermod(base, exponent, modulus))