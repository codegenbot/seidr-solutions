def luhn(card):
    card = [int(x) for x in str(card).split()]
    checksum = 0
    for i, n in enumerate(card):
        if (i % 2) == 1:
            n *= 2
            if n > 9:
                n -= 9
        checksum += n
    return checksum