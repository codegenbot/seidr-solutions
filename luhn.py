```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    sum = 0
    doubled = False
    for i, digit in enumerate(card_number):
        if i % 2 == 1:
            if doubled:
                if digit * 2 > 9:
                    sum += (digit * 2) - 9
                else:
                    sum += digit * 2
            else:
                sum += digit
        doubled = not doubled
    return sum