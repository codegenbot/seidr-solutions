```
class PowerMod:
    def __init__(self, modulus):
        self.modulus = modulus

    def powermod(self, base, exponent):
        result = 1
        while exponent > 0:
            if exponent % 2 == 1:
                result = (result * base) % self.modulus
            base = (base * base) % self.modulus
            exponent = exponent // 2
        return result

def __truediv__(self, other):
    result = 1
    while other > 0:
        if other % 2 == 1:
            result = (result * self) % self.modulus
        other = other // 2
        if other > 0:
            self = (self * self) % self.modulus
    return result

while True:
    try:
        while True:
            modulus = int(input("Enter the modulus: "))
            pm = PowerMod(modulus)
            base = int(input("Enter the base: "))
            exponent = int(input("Enter the exponent: "))
            print(pm.powermod(base, exponent))
            break
    except ValueError:
        print("Invalid input. Please enter integers.")