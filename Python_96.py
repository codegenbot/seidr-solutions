
def count_up_to(n):
    if n < 2:
        return []
    result = []
    for i in range(2, n + 1):
        if is_prime(i) and i > 2 and i < int(n**0.5) + 1:
            result.append(i)
    return result