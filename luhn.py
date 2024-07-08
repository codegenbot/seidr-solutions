```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum(2*int(digit) if i % 2 else int(digit) for i, digit in enumerate(card_number))
    if result % 10 != 0:
        return "Invalid Card Number"
    return "Valid Card Number"