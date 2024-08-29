def luhn(card_number):
    card_number = [int(x) for x in card_number.split()]
    result = sum(
        [
            x if i % 2 == 0 else x * 2 - (x * 2 > 9) * 9
            for i, x in enumerate(card_number)
        ]
    )
    return str(result)