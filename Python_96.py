def count_up_to(n):
    result = []
    for i in range(2, n + 1):
        if is_prime(i):
            result.append(i)
    return result


def is_prime(n):
    return all([n % i != 0 for i in range(2, n)])