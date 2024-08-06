def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum(
        2 * int(x) if i % 2 else int(x) for i, x in enumerate(reversed(card_number))
    ) - sum(
        int(x) // 10 + int(x) % 10
        for x in (
            str(2 * y) if i % 2 else str(y) for i, y in enumerate(reversed(card_number))
        )
    )
    return result