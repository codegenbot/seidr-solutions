def hex_key(num):
    primes = {'B': '11', 'D': '13'}
    return sum(1 for digit in num.upper() if digit in primes)