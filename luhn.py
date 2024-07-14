def luhn(card):
    card = [int(x) for x in card.split()]
    result = sum(
        (int((d) * 2) if i % 2 == 0 else (d)) if (int((d) * 2) / 10) > 0 else ((d) * 2) - 9
        for i, d in enumerate(card)
    )
    return str(result)