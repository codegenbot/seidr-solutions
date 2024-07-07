def luhn(card):
    return str(sum((int(digit) * 2 if i % 2 != 0 else int(digit)) for i, digit in enumerate(str(card)))[1:] % 10)