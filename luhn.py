def luhn(card_number):
    card_number = [int(x) for x in card_number.split()]
    result = sum(
        [
            2 * int(x) // 10 + int(x) % 10 if i % 2 else int(x)
            for i, x in enumerate(card_number)
        ]
    )
    return str(result)