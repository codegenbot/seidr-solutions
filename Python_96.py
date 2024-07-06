def count_up_to(n):
    prime_numbers = [2]
    for i in range(3, n + 1, 2):
        if all(i % j != 0 for j in range(2, int(i**0.5) + 1)):
            prime_numbers.append(i)
    return prime_numbers