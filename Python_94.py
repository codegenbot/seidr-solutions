
def skjkasdkd(lst):
    primes = []
    for i in range(2, int(max(lst)**0.5) + 1):
        if all(i % j != 0 for j in range(2, int(i**0.5) + 1)):
            primes.append(i)
    return sum(int(i) for i in str(max(primes)))