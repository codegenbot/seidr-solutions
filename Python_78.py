```
def hex_key(num):
    prime_hex = {'B': True, 'D': True}
    count = 0
    for char in num:
        if char.upper() in prime_hex:
            count += 1
        elif char.isdigit():
            if int(char) > 1 and all(int(char) % i for i in range(2, int(char))):
                count += 1
    return count