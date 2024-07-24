def luhn(card):
    card = str(card)
    result = sum(int(digit) * 2 % 10 if i % 2 != 0 else int(digit) for i, digit in enumerate(card[:-1]))
    return result + int(card[-1])