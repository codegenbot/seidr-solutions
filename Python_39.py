def prime_fib(n: int):
    if n == 1:
        return 2
    elif n == 2:
        return 3
    else:
        fib_list = [1, 1]
        prime_fib_num = 0  # Initialize prime_fib_num
        while len(fib_list) < n:
            fib_list.append(fib_list[-1] + fib_list[-2])
        for num in fib_list:
            if is_prime(num):
                prime_fib_num = num
        return prime_fib_num