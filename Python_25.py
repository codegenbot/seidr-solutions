try:
    n = int(input("Enter a number to factorize: "))

    def factorize(num):
        if num <= 0:
            return "Input should be a positive integer greater than 0."
        factors = [i for i in range(1, num + 1) if num % i == 0]
        return factors

    factors = factorize(n)
    print(factors)
except ValueError:
    print("\nInvalid input. Please enter a valid integer.")