def prime_fib():
    n = int(input("Enter a number:"))

    def is_fib(num):
        a, b = 0, 1
        while a < num:
            a, b = b, a + b
        return a == num

    count = 0
    num = 2
    while count < n:
        if is_fib(num) and is_prime(num):
            count += 1
        num += 1
    return num - 1