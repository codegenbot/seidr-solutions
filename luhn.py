def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i, digit in enumerate(reversed(card_number)):
        if (i % 2 == 0 and digit > 4): 
            total += digit * 2 - 9
        elif i != len(card_number) - 1:
            total += digit * 2 if i % 2 == 0 else digit
    return total % 10