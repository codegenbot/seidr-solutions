while True:
    try:
        n = int(input("Enter a positive number to factorize: ").strip())
        if n > 0:
            factors = []
            i = 2
            while i * i <= n:
                if n % i:
                    i += 1
                else:
                    n //= i
                    factors.append(i)
            if n > 1:
                factors.append(n)
            print(factors)
            break
        print("Please enter a positive integer.")
    except ValueError:
        print("Please enter a valid integer.")