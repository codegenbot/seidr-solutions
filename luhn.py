```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i, num in enumerate(card_number):
        if (i % 2 == 1 and num * 2 > 9): 
            total += num * 2 - 9
        elif i % 2 == 1:
            total += num * 2
        else:
            total += num
    return total