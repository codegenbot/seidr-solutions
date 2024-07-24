```
def hex_key(num):
    def is_hex(digit):
        if '0' <= digit <= '9':
            return True
        elif 'A' <= digit <= 'F':
            return True
        elif 'a' <= digit <= 'f':
            return True
        else:
            return False

    count = 0
    for char in num.upper():
        if is_hex(char):
            count += 1
    return count