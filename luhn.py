def luhn(card):
    return str(sum((i * 2 if i % 2 != 0 else i) for i in map(int, card)) % 10)