```
def hex_key(num):
    primes_count = 0
    for digit in num:
        if digit.isdigit():
            decimal_value = int(digit)
        else:
            if digit == 'B':
                decimal_value = 11
            elif digit == 'D':
                decimal_value = 13
            elif digit == '7':
                decimal_value = 7
            elif digit == '3':
                decimal_value = 3
            elif digit == '2':
                decimal_value = 2
        if decimal_value > 1 and all(decimal_value % i for i in range(2, int(decimal_value**0.5) + 1)):
            primes_count += 1
    return primes_count