def luhn(card):
    card = str(card)
    result = sum(
        (int(digit) * 2 % 9 + int(digit)) % 10
        for i, digit in enumerate(card[:-1])
        if (i % 2 != 0)
    )
    return result + int(card[-1])