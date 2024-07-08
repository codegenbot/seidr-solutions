```
def luhn(card_number):
    card_number = [int(i) for i in str(card_number)[1:]]
    doubled = [(card_number[i] * 2) if (i+1) % 2 != 0 else card_number[i] 
               for i in range(len(card_number))]
    return sum([d - 9 if d > 9 else d for d in doubled])