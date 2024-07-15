try:
    n = int(input("Enter a number: "))
    print(prime_fib(n))
except ValueError:
    print("Invalid input. Please enter a valid integer.")