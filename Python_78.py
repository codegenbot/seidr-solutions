def hex_key(num):
    return sum(digit in ['2', '3', '5', '7', 'B', 'D'] for digit in num)