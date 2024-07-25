n = int(input("Enter the value of 'n': "))

def prime_fib(n):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True
    
    def is_fibonacci(num):
        return (5 * num * num + 4) ** 0.5 == int((5 * num * num + 4) ** 0.5) or (5 * num * num - 4) ** 0.5 == int((5 * num * num - 4) ** 0.5)
    
    if is_prime(n) and is_fibonacci(n):
        return f"{n} is both prime and a Fibonacci number"
    elif is_prime(n):
        return f"{n} is a prime number"
    elif is_fibonacci(n):
        return f"{n} is a Fibonacci number"
    else:
        return f"{n} is neither a prime nor a Fibonacci number"

result = prime_fib(n)
print(result)