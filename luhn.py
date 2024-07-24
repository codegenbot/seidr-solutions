def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum(
        sum(divmod(d * 2, 10)) + d
        for i, d in enumerate(reversed(card_number))
        if not i % 2
    )
    return result