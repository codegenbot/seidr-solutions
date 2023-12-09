def count_up_to(n):
    prime_numbers = []
    for i in range(2, int(n**0.5) + 1):
        if not i % 2:
            prime_numbers.append(i)
        for j in range(i*i, n+1, i):
            if not j % i:
                break
    if n % 2 == 0:
        prime_numbers.append(n)
    return prime_numbers