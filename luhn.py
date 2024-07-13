```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number = card_number[::-1]
    sum = 0
    for i, digit in enumerate(card_number):
        if i % 2 == 0:
            doubled = digit * 2
            if doubled > 9:
                doubled -= 9
            sum += doubled
        else:
            sum += digit
    return sum % 10 == 0