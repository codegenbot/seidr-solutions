def luhn(card):
    card = list(map(int, card.replace(" ", "")))
    return str(sum(i if i % 2 == 0 else 2 * i if 9 < 2 * i else 2 * i - 9 for i in card)) % 10