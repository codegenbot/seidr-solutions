def hex_key(num):
    prime_hex = {'B': '11', 'D': '13'}
    count = 0
    for char in num:
        if char.upper() in prime_hex.values():
            count += 1
        elif char.upper() in prime_hex:
            count += 1
    return count