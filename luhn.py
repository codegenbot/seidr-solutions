def luhn_check(card):
    card = [int(x) for x in str(card)]
    total = sum(
        [
            x if i % 2 == 0 else x * 2 if x * 2 > 9 else x * 2 - 9
            for i, x in enumerate(card)
        ]
    )
    return total