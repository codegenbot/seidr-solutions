```
class MyClass:
    def __init__(self):
        pass

    def powermod(self, base, exponent, modulus):
        result = 1
        while exponent > 0:
            if exponent % 2 == 1:
                result = (result * base) % modulus
            base = (base * base) % modulus
            exponent = exponent // 2
        return result

    def __truediv__(self, other):
        result = 1
        while other > 0:
            if other % 2 == 1:
                result = (result * self) % modulus
            other = other // 2
            if other > 0:
                self = (self * self) % modulus
        return result

modulus = int(input("Enter the modulus: "))
my_object = MyClass()
while True:
    try:
        while True:
            base = int(input("Enter the base: "))
            exponent = int(input("Enter the exponent: "))
            print(my_object.powermod(base, exponent, modulus))
            break
    except ValueError:
        print("Invalid input. Please enter integers.")