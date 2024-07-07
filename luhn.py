```
def luhn(card):
    card = list(map(int, card.replace(" ", "")))
    return str(sum((i * 2 if i % 2 != 0 else i) - 9 if (i * 2) > 9 else (i * 2) for i in card) % 10)