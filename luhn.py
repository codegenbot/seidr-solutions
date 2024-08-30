def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum(
        ((i + 1) % 2 == 0 and int(digit) * 2 - 9) if int(digit) * 2 >= 10 else int(digit)
        for i, digit in enumerate(card_number)
    )
    return str(result)