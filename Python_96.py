def count_up_to(n):
    prime_numbers = []
    for i in range(2, n+1):
        if all(i % num != 0 for num in range(2, int(i**0.5) + 1)):
            prime_numbers.append(i)
    return prime_numbers