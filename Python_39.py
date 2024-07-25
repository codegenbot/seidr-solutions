try:
    n = int(input("Enter a number: "))
    result = prime_fib(n)
    print(result)
except ValueError:
    print("Invalid input. Please enter a valid integer.")