def luhn(card):
    card = str(card)
    return sum(int(digit) * 2 if i % 2 == 0 else int(digit) for i, digit in enumerate(card)) - sum(int(digit) // 10 + int(digit) % 9 for digit in (int(digit) // 10 + int(digit) % 9 if i % 2 == 0 else int(digit) for i, digit in enumerate(str(sum(int(digit) * 2 if i % 2 == 0 else int(digit) for i, digit in enumerate(card)))))