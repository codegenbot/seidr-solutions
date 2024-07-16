```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    sum = 0
    for i in range(len(card_number)):
        if len(card_number) - i % 2 == 1:  
            doubled = card_number[i] * 2
            if doubled > 9:
                doubled -= 9
            sum += doubled
        else:
            sum += card_number[i]
    return sum