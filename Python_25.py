def factorize(num):
    if num <= 0:
        return []
    factors = [i for i in range(1, num + 1) if num % i == 0]
    return factors


while True:
    try:
        n = int(input("Enter a positive integer to factorize: "))
        if n <= 0:
            raise ValueError("Input should be a positive integer.")
        factors = factorize(n)
        print(factors)
        break
    except ValueError as e:
        print("\nInvalid input:", e)
    except:
        print("\nInvalid input. Please enter a valid integer.")