n = int(input("Enter a number: "))
def prime_fib(n):
    count = 0
    num = 1
    while count < n:
        if is_prime(num) and is_fibonacci(num):
            count += 1
        num += 1
    return num - 1

print(prime_fib(n))