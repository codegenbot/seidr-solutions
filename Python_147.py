
def get_max_triples(n):
    primes = []
    for i in range(2, n+1):
        is_prime = True
        for j in range(2, int(i**0.5) + 1):
            if i % j == 0:
                is_prime = False
                break
        if is_prime:
            primes.append(i)
    dp = [0] * (n+1)
    for prime in primes:
        for i in range(len(dp)):
            dp[i] += dp[i-prime]
    return dp[-1]
