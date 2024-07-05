def count_up_to(n):
    if n < 2:
        return []
    result = []
    for i in range(2, n + 1):
        if is_prime(i):
            result.append(i)
    return result