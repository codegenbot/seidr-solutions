def luhn(card):
    card = [int(x) for x in str(card)[1:-1].split()]
    result = sum(
        2 * int(digit) if i % 2 != 0 else int(digit) for i, digit in enumerate(card)
    )
    return str(result)