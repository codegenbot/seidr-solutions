```
def luhn_check(card_number):
    card_number = [int(x) for x in str(card_number)]
    sum_of_digits = 0
    for i in range(len(card_number)):
        if i % 2 == 1:
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
        sum_of_digits += card_number[i]
    if len(card_number) % 2 == 1:  
        card_number[-1] *= 2
        if card_number[-1] > 9:
            card_number[-1] -= 9
    return sum_of_digits