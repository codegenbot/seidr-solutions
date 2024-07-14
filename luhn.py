def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i, digit in enumerate(reversed(card_number)):
        if (i % 2 == 1): 
            doubled_digit = (digit * 2)
            if doubled_digit > 9:
                doubled_digit -= 9
        else: 
            doubled_digit = digit
        total += doubled_digit
    return total