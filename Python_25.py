try:
    n = int(input("Enter a positive integer: "))
    if n <= 0:
        raise ValueError("Invalid input. Please enter a positive integer.")
    factors = factorize(n)
    print(factors)
except ValueError as e:
    print(e)
except TypeError:
    print("Invalid input. Please enter a valid integer.")
except:
    print("Invalid input. Please enter a valid integer.")