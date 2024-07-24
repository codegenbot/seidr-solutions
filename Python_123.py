def get_odd_collatz(n):
    result = []
    while n != 1:
        if n % 2 == 0:
            n = n // 2
        else:
            result.append(n)
            n = 3 * n + 1
    result.append(1)
    return sorted(result)