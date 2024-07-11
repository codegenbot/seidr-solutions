```
def hex_key(num):
    count = 0
    for digit in num:
        if digit.upper() == 'B' or digit.upper() == 'D':
            count += 1
        elif int(digit, 16) > 1 and all(int(digit, 16) % i for i in range(2, int(digit, 16)**0.5 + 1)):
            count += 1
    return count