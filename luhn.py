def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number.reverse()

    result = sum(
        [
            x if i % 2 == 0 else 2 * x if x * 10 // 9 else 2 * x - 9
            for i, x in enumerate(card_number)
        ]
    )

    return result