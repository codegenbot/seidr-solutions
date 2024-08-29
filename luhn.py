```
def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    new_card_number = 0
    for i in range(len(card_number)):
        if i % 2 == 1:
            if card_number[i] * 2 > 9:
                new_card_number += (card_number[i] * 2) - 9
            else:
                new_card_number += card_number[i] * 2
        else:
            new_card_number += card_number[i]
    return new_card_number % 10