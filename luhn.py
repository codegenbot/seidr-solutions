```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:-1].split()]
    total = 0
    for i, digit in enumerate(card_number):
        if (i % 2 == 0):
            digit *= 2
            if digit > 9:
                digit -= 9
        total += digit
    return total