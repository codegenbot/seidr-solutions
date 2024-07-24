def sumOfDivided(n):
    for i in range(1, n + 1):
        if n % i == 0:
            return i
    return None