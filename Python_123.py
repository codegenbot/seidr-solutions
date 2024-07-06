def get_odd_collatz(n):
    if n == 1:
        return [1]
    else:
        sequence = []
        while n > 1:
            if n % 2 == 0:
                n //= 2
            else:
                n = 3 * n + 1
            sequence.append(n)
        return sorted([x for x in sequence if x % 2 != 0])