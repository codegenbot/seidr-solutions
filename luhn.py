def luhn(card_number):
    card_number = list(map(int, card_number))
    result = sum(
        sum(divmod(x * 2, 10)) if i % 2 else x for i, x in enumerate(card_number)
    )
    return str(result)