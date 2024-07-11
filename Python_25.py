def factorize() -> List[int]:
    while True:
        try:
            n = int(input("Enter a number to factorize: "))
            if n < 2:
                print("Please enter a number greater than or equal to 2.")
            else:
                break
        except ValueError:
            print("Please enter a valid integer.")

    factors = []
    divisor = 2
    while n > 1:
        if n % divisor == 0:
            factors.append(divisor)
            n //= divisor
        else:
            divisor += 1
    return factors

print(factorize())