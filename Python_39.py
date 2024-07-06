
def prime_fib(n):
    fib = [0, 1]
    i = 2
    while len(fib) <= n:
        if isPrime(fib[i-1] + fib[i-2]) == False:
            return -1
        fib.append(fib[i-1] + fib[i-2])
        i += 1
    return fib[n]

def isPrime(num):
    if num <= 1 or num % 2 == 0:
        return False
    for i in range(3, int(num ** 0.5) + 1, 2):
        if num % i == 0:
            return False
    return True