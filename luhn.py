def luhn(card):
    card = [int(x) for x in card[1:]]
    doubled = [
        (2 * d) % 10 + (2 * d) // 10 if i % 2 else d
        for i, d in enumerate(reversed(card))
    ]
    return sum(doubled)