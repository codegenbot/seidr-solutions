try:
    n = int(input("Enter an integer: "))
    print(prime_fib(n))
except ValueError:
    print("Please enter a valid integer.")