def prime_fib(n):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True
    
    def is_fibonacci(num):
        if num == 0:
            return True
        a, b = 0, 1
        while b < num:
            a, b = b, a + b
        return b == num
    
    result = []
    i = 2
    while len(result) < n:
        if is_prime(i) and is_fibonacci(i):
            result.append(i)
        i += 1
    return result

try:
    n = int(input())
    print(prime_fib(n))
except ValueError:
    print("Invalid input. Please enter a valid integer.")