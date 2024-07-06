def count_up_to(n):
    prime_numbers = []
    for i in range(2, n + 1):
        if all(i % j != 0 for j in range(2, int(n**0.5) + 1)):
            prime_numbers.append(i)
    return prime_numbers