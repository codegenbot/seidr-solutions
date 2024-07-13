def luhn(card):
    card = [int(x) for x in ' ' + str(card).replace(' ', '')[1:-1] + ' '].split()
    card.reverse()
    total = 0
    for i, digit in enumerate(card):
        if i % 2 == 0:
            total += digit
        else:
            doubled_digit = (digit * 2)
            if doubled_digit > 9:
                total += doubled_digit - 9
            else:
                total += doubled_digit
    return -1 if total % 10 != 0 else 1