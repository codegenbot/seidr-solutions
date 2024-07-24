def luhn(card):
    return sum(int(digit) if (i % 2 == 0 and int(digit) * 2 > 9) or i % 2 != 0 else int(digit) for i, digit in enumerate(str(card)))