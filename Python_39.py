try:
    n = int(input("Enter the value of n: "))
    if n <= 0:
        raise ValueError("Input must be a positive integer")
    print(prime_fib(n))
except ValueError as e:
    print(e)