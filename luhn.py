def luhn(card):
    card = str(card)
    return sum((int(digit) * 2 - 9 + int(digit)) if i % 2 else int(digit) for i, digit in enumerate(reversed(card)))