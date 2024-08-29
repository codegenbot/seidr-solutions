def luhn(card):
    card = list(map(int, str(card)))
    checksum = sum(i if i * 2 <= 9 else i * 2 - 9 for i in card[1::2]) + sum(
        i for i in card[::2]
    )
    return checksum