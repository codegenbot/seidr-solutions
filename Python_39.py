def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n):
    a, b = 1, 1
    count = 0
    while count < n:
        if not is_prime(a) and a % 5 != 0:
            print(a, end=' ')
        a, b = b, a+b
        count += 1

n = int(input("Enter a number:"))
prime_fib(n)