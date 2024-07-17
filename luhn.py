def luhn(card):
    card = [int(x) for x in str(card)]
    result = sum(
        int(digit) if i % 2 == 0 else int(digit) * 2 // (1 + int(digit) > 4)
        for i, digit in enumerate(card)
    )
    return result