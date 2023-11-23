def is_prime(num: int) -> bool:
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n: int) -> int:
    if n == 1:
        return 2
    elif n == 2:
        return 3
    else:
        fib_nums = [2, 3]
        i = 2
        while len(fib_nums) < n:
            next_num = fib_nums[i-1] + fib_nums[i-2]
            if is_prime(next_num):
                fib_nums.append(next_num)
            i += 1
        return fib_nums[n-1]