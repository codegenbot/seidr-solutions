```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    double = False
    for i, digit in enumerate(reversed(card_number)):
        if double:
            if digit * 2 > 9:
                total += (digit * 2) - 9
            else:
                total += digit * 2
            double = False
        else:
            total += digit
            double = True
    return total % 10