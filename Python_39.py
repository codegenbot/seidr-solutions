def prime_fib(n):
    if n == 0 or n == 1:
        return n
    else:
        a = 0
        b = 1
        while a < n:
            if b % 2 == 0:
                a += 1
            b += 1
        return b