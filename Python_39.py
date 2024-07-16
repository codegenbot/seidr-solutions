def prime_fib():
    n = int(input("Enter the value of n: "))
    def fib(n):
        if n <= 1:
            return n
        else:
            return fib(n-1) + fib(n-2)

    count = 0
    num = 1
    while count < n:
        num += 1
        if is_prime(num) and num == fib(num):
            count += 1
    return num