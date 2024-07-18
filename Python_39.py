def prime_fib(n: int):
    if n == 1:
        return 2
    if n == 2:
        return 3

    fib_sequence = [1, 1]
    while len(fib_sequence) < n:
        fib_sequence.append(fib_sequence[-1] + fib_sequence[-2])

    for num in fib_sequence:
        if is_prime(num):
            n -= 1
            if n == 0:
                return num
    return fib_sequence[-1]  # Return the last element if n is still not reached