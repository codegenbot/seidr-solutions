try:
    n = int(input("Enter a number to factorize: "))
    def factorize(num):
        factors = []
        for i in range(1, num + 1):
            if num % i == 0:
                factors.append(i)
        return factors
    factors = factorize(n)
    print(factors)
except ValueError:
    print("\nInvalid input. Please enter a valid integer.")