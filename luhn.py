def luhn(card):
    card = [int(i) for i in str(card)[1:]]
    checksum = 0
    is_second = True
    for i in reversed(card):
        if is_second:
            i *= 2
            if i > 9:
                i -= 9
        is_second = not is_second
        checksum += i
    return checksum