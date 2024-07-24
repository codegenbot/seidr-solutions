def prime_fib(n: int):
    fib = [0, 1]
    while len(fib) <= n:
        fib.append(fib[-1] + fib[-2])
    prime_fib_nums = [num for num in fib if is_prime(num)]
    if n >= len(prime_fib_nums):  # Change to n instead of n-1
        return None
    return prime_fib_nums[n]