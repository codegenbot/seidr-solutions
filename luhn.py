```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i, digit in enumerate(card_number):
        if i % 2 == 1:  
            temp = (digit * 2) % 10  
        else:
            temp = digit
        total += temp
    return total