def luhn(card):
    return str(sum((int(digit) * 2 if i % 2 != 0 else int(digit)) if (int(digit) * 2) > 9 else (int(digit) * 2 - 9) for i, digit in enumerate(card))) % 10