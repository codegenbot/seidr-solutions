try:
    n = int(input())
    print(prime_fib(n))
except ValueError:
    print("Invalid input. Please enter a valid integer.")