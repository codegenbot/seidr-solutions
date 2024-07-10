```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = 0
    for i, digit in enumerate(reversed(card_number)):
        if (i % 2 == 1):
            digit *= 2
            if (digit > 9):
                digit -= 9
        result += digit
    return result