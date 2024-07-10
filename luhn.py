def luhn(card):
    card = [int(i) for i in str(card)]
    return sum(
        [
            x if i % 2 == 1 else 2 * x % 10 if i % 2 == 0 and x % 2 == 1 else x
            for i, x in enumerate(card)
        ]
    )