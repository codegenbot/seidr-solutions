def is_prime(num: int) -> bool:
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n: int) -> int:
    fib_sequence = [0, 1]
    while len(fib_sequence) < n + 1:
        next_fib = fib_sequence[-1] + fib_sequence[-2]
        fib_sequence.append(next_fib)

    prime_fib_nums = [num for num in fib_sequence if is_prime(num)]
    return prime_fib_nums[n]