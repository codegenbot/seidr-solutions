try:
    n = int(input("Enter the value of 'n': "))
    print(prime_fib(n))
except ValueError:
    print("Invalid input. Please enter a valid integer.")