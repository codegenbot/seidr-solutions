def prime_check(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def fibonacci(n):
    a, b = 1, 1
    for _ in range(n - 2):
        a, b = b, a + b
    return a
    
def prime_fib(n):
    count = 0
    num = 1
    while count < n:
        num += 1
        if prime_check(num) and prime_check(fibonacci(num)):
            count += 1
    return fibonacci(num)

try:
    n = int(input())
    print(prime_fib(n))
except ValueError:
    print("Invalid input. Please enter a valid integer.")