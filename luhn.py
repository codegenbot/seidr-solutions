```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i in range(len(card_number)):
        if (i % 2 == 0 and card_number[i] * 2 >= 10):
            total += card_number[i] * 2 - 9
        elif i % 2 != 0:
            total += card_number[i] * 2
        else:
            total += card_number[i]
    return total