```
def hex_key(num):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    count = 0
    for digit in num.upper():
        if digit.isdigit() and is_prime(int(digit)):
            count += 1
        elif digit in 'BDF':
            count += 1
        elif digit in '0123456789ABCDEF':
            count += (8 - len(set(num.upper()))) 
    return count