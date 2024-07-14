def luhn(card_number):
    card_number = list(map(int, card_number))
    result = sum(
        2 * int(x) if i % 2 else int(x) for i, x in enumerate(card_number)
    ) - sum(
        i // 10 + 1 if i % 10 >= 5 else 1
        for i in (2 * int(x) if i % 2 else int(x) for i, x in enumerate(card_number))
    )
    return str(result)