def calculate_factors():
    num = int(input("Enter a number: "))
    factors = factorize(num)
    print(f"Factors of {num} are {', '.join(map(str, factors))}")