def luhn(card):
    card = list(map(int, card.replace(" ", "")))
    return str(sum((i * 2 if i % 2 != 0 else i) for i in card) % 10)