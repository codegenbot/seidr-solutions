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
        if x in (1, n - 1):
            continue
        for _ in range(k - 1):
            x = pow(x, 2, n)
            if x == n - 1:
                break
        else:
            return False
    return True
```

Note that the Miller-Rabin primality test used in this solution is not a deterministic test and may produce false positives for some inputs. However, the probability of a false positive can be made arbitrarily small by increasing the value of `k`.