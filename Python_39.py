def prime_fib(n: int):
    fib = [0, 1]
    while len(fib) <= n:
        fib.append(fib[-1] + fib[-2])
    
    prime_fib_list = [num for num in fib if is_prime(num)]
    
    return prime_fib_list[n-2]