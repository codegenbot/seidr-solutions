```Python
def luhn(card):
    card = list(map(int, card.replace(" ", "")))
    return str(sum((i * 2) % 10 + (i * 2) // 10 if i % 2 != 0 else i for i in card)) % 10