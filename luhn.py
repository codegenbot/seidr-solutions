```
def luhn(card):
    card = [int(x) for x in str(card)]
    card.reverse()
    total = 0
    doubled = False
    for i, digit in enumerate(card):
        if doubled:
            if digit * 2 >= 10:
                total += (digit * 2) % 10 + 9
            else:
                total += digit * 2
            doubled = False
        else:
            total += digit
            doubled = not doubled
    return -1 if total % 10 != 0 else 1