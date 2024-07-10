def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def fibonacci(n):
    fib_list = [0, 1]
    while len(fib_list) <= n:
        fib_list.append(fib_list[-1] + fib_list[-2])
    return fib_list

def prime_fib(n):
    fib_sequence = fibonacci(n)
    return [num for num in fib_sequence if is_prime(num)]

n = int(input("Enter the value of n: "))
print(prime_fib(n))