def count_up_to(n):
    result = []
    for i in range(1, n + 1):
        if is_prime(i):
            result.append(i)
    return result


def is_prime(n):
    return n > 1 and all(n % i for i in range(2, int(n**0.5) + 1))