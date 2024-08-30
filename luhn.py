def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum(
        sum(divmod(d * 2, 10)) if i % 2 else d
        for i, d in enumerate(reversed(card_number))
    )
    return result