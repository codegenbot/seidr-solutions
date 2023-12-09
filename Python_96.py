def count_up_to(n):
    prime_numbers = []

    # Edge case: n is equal to 1 or 2, return an empty list
    if n in [1, 2]:
        return prime_numbers

    for i in range(2, int(n ** 0.5) + 1):
        if not i % 2:
            prime_numbers.append(i)

        for j in range(i * i, n + 1, i):
            if not j % i:
                break

    return prime_numbers