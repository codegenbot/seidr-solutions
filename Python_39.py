

def prime_fib(n: int):
    prime_fib returns n-th number that is a Fibonacci number and it's also prime.
    a = 0
    b = 1
    fib = 1
    counter = 2
    while True:
        fib = a + b
        counter += 1
        if is_prime(fib):
            if counter == n:
                break
            else:
                counter += 1
        a = b
        b = fib
    return fib
