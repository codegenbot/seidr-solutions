def factorize(num):
    if num <= 0:
        return []
    factors = [i for i in range(1, num + 1) if num % i == 0]
    return factors

try:
    n = int(input("Enter a positive integer: "))
    if n <= 0:
        raise ValueError("Invalid input. Please enter a positive integer.")
    factors = factorize(n)
    print(factors)
except ValueError as e:
    print(e)
except:
    print("Invalid input. Please enter a valid integer.")