def hex_key(num):
    primes = {'B': True, 'D': True}
    count = 0
    for char in num:
        if char.isdigit():
            num = int(char)
            if num > 1 and all((num % i) for i in range(2, num)):
                count += 1
        elif char.upper() in primes:
            count += 1
    return count