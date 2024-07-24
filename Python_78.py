```
def hex_key(num):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    count = sum(1 for digit in num.upper() if (digit.isdigit() and is_prime(int(digit))) or digit in 'BDF')
    return count