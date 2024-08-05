def get_odd_collatz(n):
    result = []
    while n != 1:
        if n % 2 == 1:
            result.append(n)
        n = n // 2 if n % 2 == 0 else 3 * n + 1
    result.append(1)
    return sorted(result)