n = input("Enter the number of prime Fibonacci numbers to find: ")
while not n.isdigit():
    n = input("Invalid input. Please enter a valid integer: ")
n = int(n)

result = prime_fib(n)
print(f"The {n}th prime Fibonacci number is: {result}")