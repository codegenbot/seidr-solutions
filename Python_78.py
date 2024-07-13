def hex_key(num):
    primes = {'2', '3', '5', '7', 'B', 'D'}
    count = sum(1 for digit in num if digit.upper() in primes)
    return count