def luhn(card):
    card = str(card)
    return sum(int(digit) * (2 <= i % 2 < 2.5) * (int(digit) * 2 > 9) - 9 + int(digit) for i, digit in enumerate(card))