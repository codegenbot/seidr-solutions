```
def luhn(card):
    card = str(card)
    return sum((int(digit) * 2 % 10 + int(digit)) if i % 2 else int(digit) for i, digit in enumerate(card)) * 9