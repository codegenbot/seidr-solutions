```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number.reverse()
    
    total = 0
    for i, digit in enumerate(card_number):
        if i % 2 == 1:
            digit *= 2
            if digit > 9:
                digit -= 9
        total += digit
    
    return total