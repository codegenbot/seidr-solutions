def luhn(card):
    card = list(map(int, card.replace(" ", "")))
    result = sum([x if i % 2 == 0 else (x * 2) % 10 + ((x * 2) // 10) % 10 for i, x in enumerate(reversed(card))])
    return str(result)