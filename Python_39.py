def prime_fib():
    n = input("Enter the value of 'n': ")
    
    def fibonacci(n):
        if n <= 1:
            return n
        else:
            return fibonacci(n - 1) + fibonacci(n - 2)
    
    n = int(n)
    
    prime_fibonacci = []
    count = 0
    num = 1
    while count < n:
        num += 1
        if is_prime(num) and num == fibonacci(num):
            prime_fibonacci.append(num)
            count += 1
    return prime_fibonacci

print(prime_fib())