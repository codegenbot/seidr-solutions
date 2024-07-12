try:
    n = int(input("Enter a number to factorize: "))

    def factorize(num):
        if num <= 0:
            return []
        factors = [i for i in range(1, num + 1) if num % i == 0]
        return factors

    if n > 0:
        factors = factorize(n)
        print(factors)
    else:
        print("Please enter a positive integer.")

except ValueError:
    print("\nInvalid input. Please enter a valid integer.")