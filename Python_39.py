def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n):
    def fibonacci(n):
        if n <= 1:
            return n
        else:
            return fibonacci(n-1) + fibonacci(n-2)

    fib_num = fibonacci(n)
    if is_prime(fib_num):
        return fib_num
    else:
        return 0

try:
    n = int(input("Enter a number: "))
    result = prime_fib(n)
    print(result)
except ValueError:
    print("Invalid input. Please enter a valid integer.")