n = input("Enter a number: ")
try:
    if not n.isdigit():
        raise ValueError("Please enter a valid positive integer.")
    n = int(n)
    if n <= 0:
        raise ValueError("Please enter a positive integer.")
    print(prime_fib(n))
except ValueError as e:
    print(f"Error: {e}")