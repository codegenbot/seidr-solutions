```
def hex_key(num):
    result = ''
    for digit in num.upper():
        if digit.isdigit():
            if int(digit) in [2, 3, 5, 7, 11, 13, 17]:
                result += 'B'
            else:
                result += hex(int(digit))[2:]
        elif digit in ['A', 'C', 'D', 'F']:
            result += digit
    return result