def prime_fib(n: int):
    if n == 1:
        return 2
    if n == 2:
        return 3

    fib_sequence = [1, 1]
    while True:
        new_num = fib_sequence[-1] + fib_sequence[-2]
        if is_prime(new_num):
            n -= 1
            if n == 0:
                return new_num
        fib_sequence.append(new_num)