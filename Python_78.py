def hex_key(num):
    prime_hex = set("23B5D")
    count = sum(1 for digit in num if digit.upper() in prime_hex)
    return count