def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True


def prime_fib(n):
    if n == 1:
        return 2
    elif n == 2:
        return 3
    else:
        fib_sequence = [2, 3]
        i = 2
        while len(fib_sequence) < n:
            next_fib = fib_sequence[i - 1] + fib_sequence[i - 2]
            if is_prime(next_fib):
                fib_sequence.append(next_fib)
            i += 1
        return fib_sequence[-1]