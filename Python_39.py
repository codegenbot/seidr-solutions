def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n: int):
    if n == 1:
        return 2
    elif n == 2:
        return 3
    else:
        fib_list = [1, 1]
        while len(fib_list) < n:
            fib_list.append(fib_list[-1] + fib_list[-2])
        prime_fib_num = None
        for num in fib_list:
            if is_prime(num):
                prime_fib_num = num
        return prime_fib_num

print(prime_fib(10))  # Output: 89