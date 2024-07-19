def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True


def prime_fib(n: int):
    fib_list = [1, 1]
    while len(fib_list) < n:
        fib_list.append(fib_list[-1] + fib_list[-2])

    prime_fib_list = [x for x in fib_list if is_prime(x)]
    return prime_fib_list[n - 1]