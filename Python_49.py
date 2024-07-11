def findModP():
    n = int(input("Enter a number: "))
    p = int(input("Enter another number: "))
    result = modp(n, p)
    if result is not None:
        print(f"The modular multiplicative inverse of {n} modulo {p} is {result}.")
    else:
        print("No modular multiplicative inverse exists for the given numbers.")