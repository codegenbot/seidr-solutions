    from math import sqrt
    def prime_fib(n: int):
        if n <= 0:
            return None
        fib = [0, 1]
        i = 2
        while len(fib) < n:
            fib.append(fib[i-1] + fib[i-2])
            i += 1
        if is_prime(fib[-1]):
            return fib[-1]
        else:
            return None
    
    def is_prime(n, k=5):
        if n <= 1 or n % 2 == 0:
            return False
        for _ in range(k):
            a = random.randint(2, n - 2)
            x = pow(a, n - 1, n)
            if x != 1 and x != n - 1:
                j = 1
                while j < k and x == 1 or x == n - 1:
                    x = pow(x, 2, n)
                    j += 1
                if x == n - 1 and a % n != 0:
                    return False
        return True
    
    def miller_rabin(n):
        if n <= 1 or n % 2 == 0:
            return False
        for _ in range(30):
            a = random.randint(2, n - 2)
            x = pow(a, n - 1, n)
            if x != 1 and x != n - 1:
                r = 1
                while x != 1 and x != n - 1:
                    x = pow(x, 2, n)
                    r += 1
                if x == n - 1 and a % n != 0:
                    return False
        return True
    
    is_prime = miller_rabin