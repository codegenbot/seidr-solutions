def luhn(card):
    card = list(map(int, card.replace(" ", "")))
    return str(sum((i * 2 if i % 2 != 0 else i) for i in (j if j > 9 else j-9 for j in ((i * 2) for i in card)))) % 10