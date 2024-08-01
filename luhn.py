def luhn(card_number):
    card_number = list(map(int, card_number))
    result = sum(
        2 * int(digit) if i % 2 else int(digit) for i, digit in enumerate(card_number)
    ) - sum(
        (int(digit) // 10 + 1)
        for digit in (
            str(2 * int(digit)) if i % 2 else str(int(digit))
            for i, digit in enumerate(card_number)
        )
    )
    return result