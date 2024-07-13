def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:]]
    result = sum(
        (x * 2) % 10 + (x % 2) * x if x > 4 else x * 2 % 10 + x % 2 * x
        for x in card_number
    )
    return result