def luhn(card):
    return str(sum((i * 2 if i % 2 != 0 else i) if (i * 2) > 9 else (i * 2 - 9) for i in map(int, card)) % 10)