def luhn(card):
    card = list(map(int, card.replace(" ", "")))
    return str(sum((i * 2 if i % 2 != 0 else i) if (j := i * 2) > 9 else j for i in card)) % 10