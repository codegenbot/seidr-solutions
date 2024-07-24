def powermod(base: int, exponent: int, modulus: int):
    result = 1
    base = base % modulus
    while exponent > 0:
        if exponent % 2 == 1:
            result = (result * base) % modulus
        exponent = exponent // 2
        base = (base * base) % modulus
    return result


def modp(n: int, p: int):
    if p <= 1:
        return n
    elif p % 2 == 0:
        half_mod = modp(-n if n < 0 else n, p // 2)
        return powermod(-n if n < 0 else n, half_mod, p)
    else:
        return powermod(-n if n < 0 else n, p, p)


def main():
    while True:
        try:
            base = int(input("Enter the base: "))
            exponent = int(input("Enter the exponent: "))
            modulus = int(input("Enter the modulus: "))

            result = modp(base, modulus)
            print(f"The result is {result}")
            break
        except ValueError:
            print("Invalid input. Please enter integers.")


if __name__ == "__main__":
    main()