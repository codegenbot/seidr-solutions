def find_prime_numbers():
    n = int(input("Enter a number: "))
    prime_numbers = [2]

    for i in range(3, n + 1):
        is_prime = True
        for j in range(2, math.isqrt(i) + 1):
            if i % j == 0:
                is_prime = False
                break
        if is_prime:
            prime_numbers.append(i)

    return prime_numbers