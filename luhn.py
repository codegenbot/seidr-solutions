def luhn(card):
    card = [int(x) for x in card.split()]
    result = sum(
        (
            int(digit)
            if i % 2 == 0
            else int(digit) * 2 if int(digit) * 2 > 9 else int(digit) * 2 - 9
        )
        for i, digit in enumerate(card)
    )
    return str(result)