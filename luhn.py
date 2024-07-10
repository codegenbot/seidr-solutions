```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number = card_number[-16:] 
    sum = 0
    for i, num in enumerate(card_number):
        if (i % 2 == 1): 
            doubled = num * 2
            if (doubled > 9):
                sum += (doubled - 9)
            else:
                sum += doubled
        else:
            sum += num
    return str(sum)