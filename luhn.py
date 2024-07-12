def luhn(card):
    card = [int(x) for x in str(card)]
    checksum = sum([x * 2 % 10 if i % 2 != 0 else x - (x * 2) // 10 for i, x in enumerate(card)])
    return checksum