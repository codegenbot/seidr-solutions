def prime_fib(n: int):
    fib = [0, 1]
    while len(fib) <= n:
        fib.append(fib[-1] + fib[-2])
    
    prime_fib_list = [num for num in fib if is_prime(num)]
    
    if n-1 < len(prime_fib_list):
        return prime_fib_list[n-1]
    else:
        return None  # or handle the case where index is out of range differently