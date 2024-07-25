def luhn(card):
    card = list(map(int, card.split()))
    result = sum((x * 2 if i % 2 else x) % 10 for i, x in enumerate(card))
    return str(result)