def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = (
        sum((2 * int(i) - 9) if i % 2 == 0 else int(i) for i in card_number[1:])
        + card_number[0]
    )
    return str(result % 10 or 10)