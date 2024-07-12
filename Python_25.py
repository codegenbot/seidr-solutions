while True:
    try:
        n = int(input("Enter a number to factorize: "))
        if n <= 0:
            raise ValueError
        def factorize(num):
            if num <= 0:
                return []
            factors = [i for i in range(1, num + 1) if num % i == 0]
            return factors

        factors = factorize(n)
        print(factors)
        break
    except ValueError:
        print("\nInvalid input. Please enter a positive integer.")