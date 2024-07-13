def luhn(card):
    card = [int(x) for x in str(card)[1:-1].split()]
    result = sum(
        sum(digit * 2 if i % 2 else digit for i, digit in enumerate(card))
        - 9 * (digit > 4 and digit < 7 for i, digit in enumerate(card)).sum()
    )
    return result