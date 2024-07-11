def hex_key(num):
    primes = {'B': '11', 'D': '13'}
    count = 0
    for char in num:
        if char.upper() in primes:
            count += 1
        elif char.isdigit():
            num = int(char, 16)
            if is_prime(num):
                count += 1
    return count

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True