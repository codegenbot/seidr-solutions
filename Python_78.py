```
def hex_key(num):
    prime_hex = {'B': '11', 'D': '13', '2': '2', '3': '3', '5': '5', '7': '7'}
    count = 0
    for char in num:
        if char.upper() in prime_hex:
            count += 1
    return count