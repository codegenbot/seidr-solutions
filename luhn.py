```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total_even, total_odd = 0, 0
    for i, digit in enumerate(reversed(card_number)):
        if (i % 2 == 1):  
            total_odd += digit
        else:  
            digit *= 2
            if digit > 9:
                digit -= 9
            total_even += digit
    return total_even + total_odd