def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    result = sum(
        sum(divmod(x * 2, 10)) if i % 2 else x
        for i, x in enumerate(reversed(card_number))
    )
    return result