def luhn(card):
    card = list(map(int, card.split()))
    result = sum(
        (i % 2 + 1) * (d if i % 2 == 0 else d * 2 if d > 4 else d * 2 - 9)
        for i, d in enumerate(card)
    )
    return str(result)