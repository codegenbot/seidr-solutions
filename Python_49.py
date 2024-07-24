def main():
    base = int(input("Enter the base: "))
    exponent = int(input("Enter the exponent: "))
    modulus = int(input("Enter the modulus: "))

    mod_result = modp(exponent, modulus)
    result = powermod(base, mod_result, modulus)

    print(f"The result is {result}")