def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n: int):
    first = 2
    second = 3
    count = 0
    while count < n:
        temp = first + second
        first = second
        second = temp
        if is_prime(temp):
            count += 1
    return temp