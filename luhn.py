```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    sum = 0
    for i, digit in enumerate(card_number):
        if (i % 2 == 1 and digit * 2 > 9) or i % 2 == 0:
            sum += (digit * 2) - 9 if digit * 2 > 9 else digit * 2
        else:
            sum += digit
    return sum