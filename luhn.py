```Python
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    for i in range(len(card_number)):
        if i % 2 == 1: 
            if card_number[i] * 2 >= 10:
                card_number[i] = (card_number[i] * 2) % 9
            else:
                card_number[i] *= 2
    return sum(card_number)