n = int(input("Enter a positive number to factorize: ").strip())
if n <= 0:
    print("Please enter a positive integer.")
else:
    def factorize(n):
        factors = []
        for i in range(1, n + 1):
            if n % i == 0:
                factors.append(i)
        return factors

    result = factorize(n)
    print(result)