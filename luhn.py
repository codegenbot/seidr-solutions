def luhn(card):
    return str(sum((int(digit) * 2 if index % 2 != 0 else int(digit)) if (int(digit) * 2) > 9 else ((int(digit) * 2) - 9) for index, digit in enumerate(str(card)))) % 10