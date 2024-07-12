try:
    n = int(input("Enter a number to factorize: "))
    
    if n <= 0:
        print("Please enter a positive integer.")
    else:
        def factorize(num):
            factors = []
            for i in range(1, int(num ** 0.5) + 1):
                if num % i == 0:
                    factors.append(i)
                    if i != num // i:
                        factors.append(num // i)
            factors.sort()
            return factors
        
        factors = factorize(n)
        print(factors)

except ValueError:
    print("Invalid input. Please enter a valid integer.")