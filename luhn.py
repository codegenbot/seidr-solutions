def luhn(card):
    card = [int(x) for x in str(card)]
    checksum = sum((2 * card[i] if i % 2 != 0 else card[i]) - 9 if (2 * card[i] if i % 2 != 0 else card[i]) > 9 else (2 * card[i] if i % 2 != 0 else card[i]) for i in range(len(card)))
    return checksum