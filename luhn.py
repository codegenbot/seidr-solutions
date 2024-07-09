```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    sum = 0
    for i in range(len(card_number)):
        if i % 2 != 0:
            if card_number[i] * 2 > 9:
                card_number[i] = card_number[i] * 2 - 9
            else:
                card_number[i] *= 2
        sum += card_number[i]
    return sum