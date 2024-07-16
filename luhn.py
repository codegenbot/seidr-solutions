def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    sum = 0
    for i, digit in enumerate(card_number):
        if i % 2 == 1:  
            doubled = (digit * 2) % 10 if digit * 2 > 9 else digit * 2
            sum += doubled
        else:
            sum += digit
    return 10 - (sum % 10)