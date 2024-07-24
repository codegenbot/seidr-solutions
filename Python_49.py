def main():
    # Ask user for inputs
    base = int(input("Enter the base: "))
    exponent = int(input("Enter the exponent: "))
    modulus = int(input("Enter the modulus: "))

    # Call your functions with user inputs
    result = modp(base, exponent)
    print(
        f"The modular multiplicative inverse of {base} raised to the power of {exponent} (modulus {modulus}) is: {result}"
    )


if __name__ == "__main__":
    main()