def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum(
        (
            int(digit)
            if i % 2 == 0
            else int(digit) * 2 if int(digit) * 2 >= 10 else int(digit) * 2
        )
        for i, digit in enumerate(card_number)
    )
    return result