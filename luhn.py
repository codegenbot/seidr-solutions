def luhn(card):
    total = 0
    for i, digit in enumerate(reversed(card)):
        if i % 2 == 0 and int(digit) * 2 >= 10:
            total += int(digit) * 2 - 9
        else:
            total += int(digit)
    return total