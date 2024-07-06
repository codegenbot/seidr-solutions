from math import is_prime


def prime_fib(n):
    fib = [0, 1]
    i = 2
    while len(fib) <= n:
        next_num = fib[i - 1] + fib[i - 2]
        if is_prime(next_num):
            fib.append(next_num)
            i += 1
        else:
            break
    return fib[-1]