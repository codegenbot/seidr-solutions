```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = 0
    for i, digit in enumerate(card_number):
        if i % 2 == 1:
            doubled = digit * 2
            if doubled > 9:
                result += doubled - 9
            else:
                result += doubled
        else:
            result += digit
    return result