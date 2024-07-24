def luhn(card):
    return sum((int(digit) * 2 if i % 2 == 0 else int(digit)) - 9 if (int(digit) * 2 if i % 2 == 0 else int(digit)) > 9 else int(digit) for i, digit in enumerate(str(card)))