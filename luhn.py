def luhn(card):
    card = list(map(int, card.split()))
    result = sum(
        [
            x if i % 2 == 0 else x * 2 > 9 and x * 2 - 9 or x * 2
            for i, x in enumerate(reversed(card))
        ]
    )
    return result