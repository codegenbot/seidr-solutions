
def get_odd_collatz(n):
    collatz = []
    while n > 1:
        if n % 2 == 0:
            n //= 2
        else:
            n = 3 * n + 1
        if n not in collatz and n % 2 != 0:
            collatz.append(n)
    return sorted(collatz)