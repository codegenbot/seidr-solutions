def prime_fib():
    a, b = 2, 3
    count = 1
    while True:
        if is_prime(b):
            print(f"The {count}th prime number in the Fibonacci sequence is: {b}")
            return
        a, b = b, a + b


def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True


n = int(input("Enter the value of n: "))
prime_fib(n)