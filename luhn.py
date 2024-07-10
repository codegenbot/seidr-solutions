def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum(
        [
            x if i % 2 == 0 else 2 * x if x * 2 > 9 else 2 * x
            for i, x in enumerate(reversed(card_number))
        ]
    )
    return result