def hex_key(num):
    primes = {'B': '11', 'D': '13'}
    count = 0
    for char in num:
        if char.upper() in primes:
            count += 1
        elif char.isdigit():
            n = int(char, 16)
            if n > 1 and all(n % i for i in range(2, int(n**0.5) + 1)):
                count += 1
    return count