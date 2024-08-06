def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:]]
    result = sum(
        (
            int(digit)
            if i % 2 == 0
            else int(digit) * 2 if int(digit) * 2 > 9 else int(digit) * 2 - 9
        )
        for i, digit in enumerate(reversed(card_number))
    )
    return str(result)