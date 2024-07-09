def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    sum = 0
    for i, digit in enumerate(reversed(card_number)):
        if (i % 2 == 1):  
            digit *= 2
            if digit > 9:
                digit -= 9
        sum += digit
    return 10 - (sum % 10) if sum > 0 else 0