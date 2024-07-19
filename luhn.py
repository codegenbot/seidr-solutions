def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:-1]]
    result = sum(
        (d * 2 if i % 2 else d) - 9 if (d * 2) > 9 else d for i, d in enumerate(card_number)
    )
    return result