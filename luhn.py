def luhn(card_number):
    card_number = [int(x) for x in card_number.split()]
    sum_card_number = 0
    for i in range(len(card_number)):
        if i % 2 == 1:
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
        sum_card_number += card_number[i]
    return str(sum_card_number)