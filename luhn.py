def luhn(card):
    return sum(int(digit) if int(digit) * (i % 2 == 0) * 2 > 9 else int(digit) * (i % 2 == 0) * 2 else int(digit) for i, digit in enumerate(str(card)))