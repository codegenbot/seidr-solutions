def luhn(card):
    card = [int(x) for x in str(card)]
    result = sum(
        2 * int(digit) if i % 2 else int(digit) for i, digit in enumerate(card)
    )
    return (result - ((result // 10 + 1) % 10)) * 9