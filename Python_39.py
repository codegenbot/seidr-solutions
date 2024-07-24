def prime_fib(n: int) -> int:
    fib = [0, 1]
    while len(fib) < n:
        fib.append(fib[-1] + fib[-2])

    prime_fib_nums = [num for num in fib if is_prime(num)]

    if n == 1:
        return 2
    elif n > 1 and n <= len(prime_fib_nums):
        return prime_fib_nums[n - 1]
    else:
        return prime_fib_nums[-1]