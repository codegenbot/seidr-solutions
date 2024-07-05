def hex_key(num):
    count = 0
    for digit in num:
        if int(digit, 16) in [2, 3, 5, 7, 11, 13]:
            count += 1
    return count