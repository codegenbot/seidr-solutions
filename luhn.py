def luhn(card):
    card = list(map(int, card.replace(" ", "")))
    return str(sum((d * 2 if i % 2 != 0 else d) if (d * 2) > 9 else (d * 2 - 9) for i, d in enumerate(card)) % 10)