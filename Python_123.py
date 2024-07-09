def get_odd_collatz(n):
    result = set()
    while n != 1:
        if n % 2 == 1:
            result.add(n)
        n = n // 2 if n % 2 == 0 else 3 * n + 1
    result.add(1)
    return sorted(list(result))