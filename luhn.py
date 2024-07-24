def luhn(card):
    card = str(card)
    return sum(int(digit) * 2 % 10 + int(digit) if i % 2 == 0 else int(digit) * 2 % 10 for i, digit in enumerate(card[:-1])) * 9 + int(card[-1])