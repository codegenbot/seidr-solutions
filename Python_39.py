def prime_fib(n: int):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    def fibonacci(n):
        if n <= 0:
            return []
        fib_nums = [0, 1]
        while len(fib_nums) < n:
            fib_nums.append(fib_nums[-1] + fib_nums[-2])
        return fib_nums

    fib_nums = fibonacci(n)
    prime_fib_nums = []
    for num in fib_nums:
        if is_prime(num):
            prime_fib_nums.append(num)
    return prime_fib_nums[-1]