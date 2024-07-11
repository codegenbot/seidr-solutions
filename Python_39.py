def prime_fib(n: int):
    def is_prime(num: int) -> bool:
        if num < 2:
            return False
        for i in range(2, int(num**0.5)+1):
            if num % i == 0:
                return False
        return True

    fib_nums = [0, 1]
    while len(fib_nums) <= n:
        fib_nums.append(fib_nums[-1] + fib_nums[-2])

    for i in range(len(fib_nums)-1, -1, -1):
        if is_prime(fib_nums[i]) and i == n-1:
            return fib_nums[i]
    return None