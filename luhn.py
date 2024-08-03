def luhn(card):
    card = list(map(int, card.split()))
    result = sum(2 * d if i % 2 else d for i, d in enumerate(card))
    return str(result % 10)