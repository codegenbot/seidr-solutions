```
def hex_key(num):
    count = 0
    for digit in num.upper():
        if digit.isdigit() and digit in '123':
            if int(digit) % 2 == 1:
                count += 1
        elif digit in 'BDF':
            count += 1
    return count