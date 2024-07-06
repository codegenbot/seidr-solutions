Here is the completed code:

def hex_key(num):
    primes = {2, 3, 5, 7, 11, 13, 17}
    count = 0
    for char in num:
        if char.isdigit():
            val = int(char)
            if val in primes:
                count += 1
        elif char.upper() in 'BDF':
            if char.upper() == 'B':
                val = 11
            elif char.upper() == 'D':
                val = 13
            else:
                val = 15
            if val in primes:
                count += 1
    return count