def hex_key(num):
    prime_hex_digits = set('237BDF')
    count = sum(1 for c in num if c.upper() in prime_hex_digits)
    return count