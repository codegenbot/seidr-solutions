def hex_key(num):
    return sum(1 for digit in num if digit in ['2', '3', '5', '7', 'B', 'D'])