def prime_fib(n: int):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True
    
    def is_fibonacci(num):
        a, b = 0, 1
        while b < num:
            a, b = b, a + b
        return b == num
    
    count = 0
    i = 2
    while count < n:
        if is_fibonacci(i) and is_prime(i):
            count += 1
        i += 1
    return i - 1