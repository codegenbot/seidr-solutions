def hex_key(num):
    primes = {"B": True, "D": True}
    count = sum(1 for digit in num if (digit.upper() in primes) or (int(digit, 16) > 1 and all(int(digit, 16) % i for i in range(2, int(int('0x' + digit, 16)**0.5) + 1))))
    return count