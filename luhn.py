```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i, digit in enumerate(card_number):
        if (i % 2 == 1): 
            double_digit = 2 * digit
            if (double_digit > 9): 
                total += double_digit % 10
            else: 
                total += double_digit 
        else:
            total += digit 
    return total