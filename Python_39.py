def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def generate_fibonacci():
    a, b = 0, 1
    while True:
        yield a
        a, b = b, a + b

def prime_fib(n):
    prime_fibonacci = []
    gen = generate_fibonacci()
    count = 0
    while count < n:
        fib_num = next(gen)
        if is_prime(fib_num):
            prime_fibonacci.append(fib_num)
            count += 1
    return prime_fibonacci

n = int(input("Enter the number of prime Fibonacci numbers to find: ").strip())
print(prime_fib(n))