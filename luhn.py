def luhn(card_number):
    sum = 0
    for i in range(15):
        if i % 2 == 0:
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
        sum += card_number[i]
    return sum