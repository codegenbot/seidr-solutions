def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n: int):
    if n == 1:
        return 2
    elif n == 2:
        return 3
    else:
        fib_sequence = [1, 1]
        while len(fib_sequence) < n:
            fib_sequence.append(fib_sequence[-1] + fib_sequence[-2])
        for num in fib_sequence:
            if is_prime(num):
                prime_count = n - 1
                if prime_count == 0:
                    return num
                prime_count -= 1