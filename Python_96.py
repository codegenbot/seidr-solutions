def count_up_to(n):
    result = []
    for i in range(2, n + 1):
        if is_prime(i):
            result.append(i)
    return result