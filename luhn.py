def luhn(card):
    total = 0
    for i, digit in enumerate(reversed(str(card))):
        if i % 2 == 1:
            digit = str(int(digit) * 2)
            if len(digit) > 1:
                digit = str((int(digit)) % 10 + int(digit[:-1]) % 10)
        total += int(digit)
    return total