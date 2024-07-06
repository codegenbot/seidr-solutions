import random


def modp(n: int, p: int):
    if n < 2:
        return n
    if p < 2:
        return n
    if p == 2 or n % p == 0:
        return n % p

    def isWitness(a, n, p):
        if pow(a, (p - 1) // 2, p) == 1:
            return False
        for _ in range(3):
            if pow(a, 2 ** (_ - 1), p) != 1 and pow(a, 2**_, p) != n:
                return True
        return False

    def millerRabin(n, k=5):
        if n < 2:
            return True
        if n % 2 == 0:
            return False

        for i in range(k):
            a = random.randint(2, n - 1)
            if isWitness(a, n, p) and pow(a, (n - 1), n) != n:
                return False
        return True

    if not millerRabin(p):
        return None
    if n < p:
        return n % p
    return pow(n, p - 2, p)