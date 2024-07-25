def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n):
    fib = [0, 1]
    while len(fib) < n:
        fib.append(fib[-1] + fib[-2])
    return [num for num in fib if is_prime(num)]

try:
    n = int(input("Enter a number: "))
    if n <= 0:
        raise ValueError
    result = prime_fib(n)
    print(result)
except ValueError:
    print("Invalid input. Please enter a positive integer.")