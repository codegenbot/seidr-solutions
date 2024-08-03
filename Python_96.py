def count_up_to(n):
    result = []
    for i in range(2, n):
        is_prime_num = True
        for j in range(2, int(i**0.5) + 1):
            if i % j == 0:
                is_prime_num = False
                break
        if is_prime_num:
            result.append(i)
    return result