```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i, digit in enumerate(card_number):
        if (i % 2 == 0): 
            temp = digit * 2
            if temp > 9:
                total += temp - 9
            else:
                total += temp
        else:
            total += digit  
    return total