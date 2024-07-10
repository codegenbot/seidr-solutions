def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum(sum(divmod(d * 2, 10)) + d for d in card_number[1::2]) + sum(
        divmod(d, 10) for d in card_number[::2]
    )
    return result