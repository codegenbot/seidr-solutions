def count_up_to(n):
    if n <= 100:
        return []
    result = []
    for i in range(2, n + 1, 2):
        if is_prime(i):
            result.append(i)
    return result