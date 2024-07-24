def luhn(card):
    return sum(int(digit) if (i % 2 != 0 or int(digit) * 2 > 9) else int(digit) * 2 - 9 for i, digit in enumerate(str(card)))