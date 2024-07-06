def count_up_to(n):
    count = 0
    for i in range(2, n + 1):
        if is_prime(i):
            count += 1
    return count