```
def __truediv__(self, other):
    result = 1
    while other > 0:
        if other % 2 == 1:
            result = (result * self) % modulus
        other = other // 2
        if other > 0:
            self = (self * self) % modulus
    return result

while True:
    try:
        while True:
            base = int(input("Enter the base: "))
            exponent = int(input("Enter the exponent: "))
            modulus = int(input("Enter the modulus: "))
            print(powermod(base, exponent, modulus))
            break
    except ValueError:
        print("Invalid input. Please enter integers.")