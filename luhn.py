```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    sum = 0
    alt = False
    for i, v in enumerate(card_number):
        if i % 2 == 1:  
            v *= 2
            sum += v - (v // 10 * 9) if v > 9 else v
        else:
            sum += v
    return sum