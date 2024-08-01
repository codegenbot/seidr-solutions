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
    for char in num:
        if char.upper() in '23BSD':
            if is_prime(int(char, 16)):
                count += 1
    return count