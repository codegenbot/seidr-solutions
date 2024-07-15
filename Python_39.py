def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n: int):
    def fibonacci(n):
        if n <= 1:
            return n
        else:
            return fibonacci(n-1) + fibonacci(n-2)
    
    count = 0
    i = 0
    while count < n:
        if is_prime(fibonacci(i)):
            count += 1
        i += 1
    return fibonacci(i-1)

while True:
    try:
        n = int(input("Enter the number of prime Fibonacci numbers to find: "))
        if n <= 0:
            raise ValueError
        break
    except ValueError:
        print("Please enter a valid positive integer.")

result = prime_fib(n)
print(f"The {n}th prime Fibonacci number is: {result}")