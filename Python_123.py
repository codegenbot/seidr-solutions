def get_odd_collatz(n):
    result = [n]
    while n != 1:
        n = n // 2 if n % 2 == 0 else 3 * n + 1
        if n % 2 != 0:
            result.append(n)
    return sorted(set(result))