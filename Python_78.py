def hex_key(num):
    primes = {'B': 11, 'D': 13}
    count = sum(1 for digit in num if (int(str(digit), 16) in primes or int(str(digit), 16) > 1 and all(int(str(digit), 16) % i for i in range(2, int(str(digit), 16))))]
    return count