Here's the corrected code:

```python
def powermod(base, exponent, modulus):
    result = 1
    base = base % modulus
    while exponent > 0:
        if exponent % 2 == 1:
            result = (result * base) % modulus
        base = (base * base) % modulus
        exponent //= 2
    return result

while True:
    try:
        base = int(input("Enter the base: "))
        if base <= 0:
            print("Invalid input. Base should be a positive integer.")
            continue
        exponent = int(input("Enter the exponent: "))
        if exponent < 0:
            print("Invalid input. Exponent should be a non-negative integer.")
            continue
        modulus = int(input("Enter the modulus: "))
        if modulus <= 0:
            print("Invalid input. Modulus should be a positive integer.")
            continue
        print(powermod(base, exponent, modulus))
    except ValueError:
        print("Invalid input. Please enter integers.")