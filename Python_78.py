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
    for char in num.upper():
        if char.isdigit():
            if is_prime(int(char)):
                count += 1
        elif char == 'B':
            count += 2
        elif char == 'D':
            count += 3
    return count