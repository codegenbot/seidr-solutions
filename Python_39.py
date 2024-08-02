def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

def fibonacci(n):
    fib_list = [0, 1]
    for i in range(2, n):
        fib_list.append(fib_list[i-1] + fib_list[i-2])
    return fib_list

def prime_fib(n):
    fib_list = fibonacci(n * 2)  # Generate enough Fibonacci numbers
    prime_fib_list = [num for num in fib_list if is_prime(num)]
    return prime_fib_list[:n]