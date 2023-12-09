def largest_prime_factor(n):
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0 and is_prime(i):
            return i
    return n

def is_prime(n):
    if n <= 1 or n % 2 == 0:
        return False
    for i in range(3, int(n**0.5) + 1, 2):
        if n % i == 0:
            return False
    return True

def sieve_of_eratosthenes(n):
    prime = [True] * (n + 1)
    for p in range(2, int(n**0.5) + 1):
        if prime[p]:
            for i in range(p * p, n + 1, p):
                prime[i] = False
    return [p for p in range(2, n + 1) if prime[p]]

def largest_prime_factor_sieve(n):
    primes = sieve_of_eratosthenes(int(n**0.5))
    for prime in reversed(primes):
        if n % prime == 0:
            return prime
    return n

def largest_prime_factor_trial_division(n):
    for i in range(2, int(n**0.5) + 1):
        while n % i == 0:
            n = n // i
    return n

def main():
    print("Largest prime factor of 13195 is", largest_prime_factor(13195))

if __name__ == "__main__":
    main()