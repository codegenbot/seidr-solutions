def prime_fib(n):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True
    
    def is_fib(num):
        if num == 0:
            return True
        a, b = 0, 1
        while a < num:
            a, b = b, a + b
        return a == num
    
    return is_prime(n) and is_fib(n)

n = int(input("Enter a number: "))
print(prime_fib(n))