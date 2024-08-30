def luhn(card_number):
    card_number = [int(x) for x in card_number.split()]
    result = sum(
        (i % 2 == 0 and int(digit) * 2) or int(digit)
        for i, digit in enumerate(card_number)
    )
    return str(result)