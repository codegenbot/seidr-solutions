n = int(input("Enter the number of prime Fibonacci numbers to find: "))

def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n):
    result = []
    a, b = 1, 1
    
    while len(result) < n:
        if is_prime(a) and a % 5 == 0:
            result.append(a)
        a, b = b, a + b
    
    return result

print(prime_fib(n))