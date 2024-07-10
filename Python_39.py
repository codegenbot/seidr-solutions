def prime_fib(n):
    fib_sequence = [0, 1]
    while len(fib_sequence) < n:
        fib_sequence.append(fib_sequence[-1] + fib_sequence[-2])

    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True

    count = 0
    current_index = 2
    while count < n:
        current_num = fib_sequence[current_index]
        if is_prime(current_num):
            count += 1
        current_index += 1

    return current_num