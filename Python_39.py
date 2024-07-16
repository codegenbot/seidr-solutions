try:
    n = int(input("Enter a number: "))
    print(prime_fib(n))
except ValueError:
    print("Please enter a valid integer.")